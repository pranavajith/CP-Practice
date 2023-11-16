#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

class Node {
    int SIZE;
    friend class BPlusTree;
public:
    bool ISLEAF;
    Node* NEXT_BLOCK;
    vector<int> KEYS;
    vector<Node*> PTRS;

    Node(int size, bool isLeaf);
    bool isLeaf();
    pair<int, Node*> insert(int x);
    void print();
};

class BPlusTree {
private:
    int NODE_SIZE;
    Node* ROOT;

public:
    BPlusTree(int m);
    int insert(int x);
    Node* getROOT();
    void print();
    int remove(int x);
    vector<int> HISTORY;
};

Node::Node(int size, bool isLeaf) {
    this->SIZE = size;
    this->NEXT_BLOCK = NULL;
    this->ISLEAF = isLeaf;
}

bool Node::isLeaf() {
    return this->ISLEAF;
}

BPlusTree::BPlusTree(int m) {
    this->NODE_SIZE = m;
    this->ROOT = new Node(this->NODE_SIZE, true);
}

Node* BPlusTree::getROOT() {
    return this->ROOT;
}

int BPlusTree::insert(int x) {
    this->HISTORY.push_back(x);
    pair<int, Node*> data = this->ROOT->insert(x);

    if (data.second == NULL) {
        return 1; // STATUS 1: Insertion was handled within the leaf node.
    } else {
        // Create a new root node and update the tree structure.
        Node* newROOT = new Node(this->NODE_SIZE, false);
        newROOT->KEYS.push_back(data.first);
        newROOT->PTRS.push_back(this->ROOT);
        newROOT->PTRS.push_back(data.second);
        this->ROOT = newROOT;
        return 2; // STATUS 2: Global level increase.
    }
}

pair<int, Node*> Node::insert(int x) {
    int i = 0;

    // Find the position to insert x in the keys.
    while (i < this->KEYS.size() && x > this->KEYS[i]) {
        i++;
    }

    if (!this->ISLEAF) {
        // If this is not a leaf node, continue inserting in the child node.
        pair<int, Node*> data = this->PTRS[i]->insert(x);

        if (data.second == NULL) {
            return data; // Data was handled in a child node.
        } else {
            // Insert the data in this node.
            this->KEYS.insert(this->KEYS.begin() + i, data.first);
            this->PTRS.insert(this->PTRS.begin() + i + 1, data.second); // Updated to insert the right child properly

            // Check if the node size exceeds the limit, and split if necessary.
            if (this->KEYS.size() > this->SIZE) {
                int LHALF = (this->KEYS.size() + 1) / 2;
                int RHALF = this->KEYS.size() - LHALF;

                Node* newINTERNALNODE = new Node(this->SIZE, false);
                newINTERNALNODE->KEYS.assign(this->KEYS.begin() + LHALF, this->KEYS.end());
                newINTERNALNODE->PTRS.assign(this->PTRS.begin() + LHALF, this->PTRS.end());

                int z = this->KEYS[LHALF - 1];
                this->KEYS.erase(this->KEYS.begin() + LHALF - 1, this->KEYS.end());
                this->PTRS.erase(this->PTRS.begin() + LHALF, this->PTRS.end());

                pair<int, Node*> response;
                response.first = z;
                response.second = newINTERNALNODE;

                return response;
            } else {
                pair<int, Node*> response;
                response.first = -1;
                response.second = NULL;

                return response;
            }
        }
    } else {
        // If this is a leaf node, insert x into this node.
        this->KEYS.insert(this->KEYS.begin() + i, x);

        // Check if the node size exceeds the limit, and split if necessary.
        if (this->KEYS.size() > this->SIZE) {
            int LHALF = (this->KEYS.size()) / 2;
            int RHALF = this->KEYS.size() - LHALF;

            Node* newLEAFNODE = new Node(this->SIZE, true);
            newLEAFNODE->KEYS.assign(this->KEYS.begin() + LHALF, this->KEYS.end());
            newLEAFNODE->PTRS.push_back(this->NEXT_BLOCK);

            int z = this->KEYS[LHALF - 1];
            this->KEYS.erase(this->KEYS.begin() + LHALF - 1, this->KEYS.end());
            this->NEXT_BLOCK = newLEAFNODE;

            pair<int, Node*> response;
            response.first = z;
            response.second = newLEAFNODE;

            return response;
        } else {
            pair<int, Node*> response;
            response.first = -1;
            response.second = NULL;

            return response;
        }
    }
}


void BPlusTree::print() {
    queue<Node*> BUF;
    BUF.push(this->ROOT);
    BUF.push(NULL);

    while (!BUF.empty()) {
        Node* TMP = BUF.front();
        BUF.pop();

        if (TMP == NULL) {
            cout << endl;

            if (!BUF.empty()) {
                BUF.push(NULL);
            }
        } else {
            TMP->print();
            cout << "   ";

            if (!TMP->ISLEAF) {
                for (auto& I : TMP->PTRS) {
                    BUF.push(I);
                }
            }
        }
    }

    cout << endl;
}

void Node::print() {
    cout << "[|";
    for (auto& I : this->KEYS) {
        cout << I << "|";
    }
    cout << "]";
}

int BPlusTree::remove(int x) {
    bool ok = false;

    for (auto& I : this->HISTORY) {
        if (x == I) {
            ok = true;
        }
    }

    if (ok == false) {
        return 0;
    } else {
        this->ROOT = new Node(this->NODE_SIZE, true);

        for (auto& I : HISTORY) {
            if (I == x || I == 0) {
                continue;
            }

            this->insert(I);
        }

        return 1;
    }
}

void showMenu() {
    cout << "\nAvailable options: \n";
    cout << "* insert <value>" << endl;
    cout << "* exit" << endl;
    cout << "* display" << endl;
    cout << "* remove <value>" << endl;
    cout << endl;
}

int main() {
    cout << "Welcome, This is B+ Tree Implementation\n";
    int FANOUT;
    cout << "Set the Maximum FANOUT: ";
    cin >> FANOUT;

    BPlusTree* BPT = new BPlusTree(FANOUT);
    cout << "I made a B+ Tree for you!\nYou can do the following queries:\n";
    showMenu();
    string choice = "";
    int value;

    do {
        cout << "> ";
        cin >> choice;
        cout << endl;

        if (choice == "insert") {
            cin >> value;
            int status = BPT->insert(value);
            BPT->print();
        } else if (choice == "display") {
            BPT->print();
        } else if (choice == "remove") {
            int mode;
            cin >> value;
            BPT->remove(value);
            BPT->print();
        } else if (choice != "exit") {
            cout << "Invalid input. Please select from the available options." << endl;
            showMenu();
        }
    } while (choice != "exit");

    return 0;
}
