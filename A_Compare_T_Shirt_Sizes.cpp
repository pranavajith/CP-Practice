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

void solve() {
    string a,b; 
    cin >> a >> b;
    char ca = a.back();
    char cb = b.back();
    if (ca == cb) {
        if (a.size() == b.size()) cout << '=';
        else if (ca == 'S') {
            cout << (a.size() < b.size() ? '>' : '<');
        } else {
            cout << (a.size() < b.size() ? '<' : '>');
        }
    }else cout << (ca < cb ? '>' : '<');
    cout << '\n';
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}