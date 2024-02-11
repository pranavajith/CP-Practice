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
    ll n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector <ll> v(n+1);
    for (int i=1; i<=n; i++) {
        if (s[i-1] == '+') v[i] = 1;
        else v[i] = -1;
    }
    vector <ll> pref(n+1, 0);
    for (int i=1; i<=n; i++) {
        if (i%2) pref[i] = pref[i-1] + v[i];
        else pref[i] = pref[i-1] - v[i];
    }
    while (q--) {
        ll a,b;
        cin>>a>>b;
        if (pref[b] - pref[a-1] == 0) cout<<0<<"\n";
        else if ((b-a+1) % 2) cout<<1<<"\n";
        else cout<<2<<"\n";
    }
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