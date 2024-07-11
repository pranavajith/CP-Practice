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

bool isValidRow(string row, const string& ref1, const string& ref2) {
    for (int shift = 0; shift < 8; ++shift) {
        bool match1 = true;
        bool match2 = true;
        for (int i = 0; i < 8; ++i) {
            if (row[(i + shift) % 8] != ref1[i]) match1 = false;
            if (row[(i + shift) % 8] != ref2[i]) match2 = false;
        }
        if (match1 || match2) return true;
    }
    return false;
}

void solve(){
    vector<string> board(8);
    for (int i=0; i<8; i++) cin>>board[i];
 
    string ref1 = "WBWBWBWB";
    string ref2 = "BWBWBWBW";
 
    for (const string& row : board) {
        if (!isValidRow(row, ref1, ref2)) {
            cout << "NO" << "\n";
            return;
        }
    }
 
    cout << "YES" << "\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}