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
    ll n, m, res=10000, ansi;
    string s, t;
    cin>>n>>m;
    cin>>s>>t;
    for (ll i=0; i<=t.size()-s.size(); i++) {
        ll cnt=0;
        for (ll j=0; j<s.size(); j++) {
            if (s[j]!=t[i+j]) {
                cnt++;
            }
        }
        if (cnt<res) {
            res=cnt;
            ansi=i;
        }
    }
    cout<<res<<endl;
    for (ll i=0; i<s.size(); i++) {
        if (s[i]!=t[i+ansi]) {
            cout<<i+1<<' ';
        }
    }
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