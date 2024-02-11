#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

#include <bits/stdc++.h>


void printStack(stack <string> st){
    stack <string> new1;
    while (st.size()) {
        cout<<st.top()<<"\n";
        new1.push(st.top()); st.pop();
    }
    cout<<"_________________\n";
    // while (new1.size()) {
    //     // cout<<new1.top()<<"\n";
    //     st.push(new1.top())
    // }
}


bool isAlph(char c) {
	return (c>='a' && c<='z');
}

bool isReq(string s){
	if ((s[0]>='a' && s[0]<='z') || (s[0] == '(')) return true;
	return false;
}


string prefixToInfixConversion(string &s){
	// Write your code here.
	stack <string> st;
	for (auto d:s) {
		if (st.empty()) {
			string a; a+=d;
			st.push(a);
		}
		else {
			if (!isAlph(d)) {
				string a; a+=d;
				st.push(a);
			}
			else {
				if (isReq(st.top())){
                    // string temp; temp += '(';
                    string curel; curel = d;
                    while (st.size() && isReq(st.top())) {
                        string a = st.top(); st.pop();
					    string reqChar = st.top(); st.pop();
                        string temp = a + reqChar + curel;
                        curel = '(' + temp + ')';
                    }
					// string temp;
					// temp+= '(';
					// temp+= a;
					// temp += reqChar;
					// temp += d;
					// temp += ')';
					st.push(curel);
				}
				else {
					string a;
					a += d;
					st.push(a);
				}
			}
		}
        // printStack(st);
	}
    // while (st.size()!=1) {
    //     string a = st.top(); st.pop();
    //     string b = st.top(); st.pop();
    //     string c = st.top(); st.pop();
    //     string d = b + c + a;
    //     st.push(d);
    // }
    // printStack(st);
	return st.top();
}


int main() 
{
    string a = "*-a/bc-/dkl";
    prefixToInfixConversion(a);
    return 0;
}