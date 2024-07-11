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

void solve(){
    string a, b, s1, s2;
    cin >> a >> b;
    set<char> st, st1;
    for(int i = 0; i < a.size(); i++){
        st.insert(a[i]);
        st1.insert(b[i]);
    }
    for(auto i : st) {
            if(st1.find(i) != st1.end()) {
                cout << "YES\n";
                return;
            }
        }
    cout << "NO\n";
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