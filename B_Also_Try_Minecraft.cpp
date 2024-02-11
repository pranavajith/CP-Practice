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
    ll n,m;
    cin>>n>>m;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    vector <ll> pref(n,0), lst(n,0);
    for (int i=1; i<n; i++) {
        if (v[i] >= v[i-1]) pref[i] = pref[i-1];
        else pref[i] = pref[i-1] + v[i-1] - v[i];
    }
    for (int i=n-2; i>=0; i--) {
        if (v[i] >= v[i+1]) lst[i] = lst[i+1];
        else lst[i] = lst[i+1] + v[i+1] - v[i];
    }
    // for (auto d: pref) cout<<d<<" "; cout<<"\n";
    while (m--) {
        ll a,b;
        cin>>a>>b;
        ll ans;
        if (b > a) ans = pref[b-1] - pref[a-1];
        else ans = lst[b-1] - lst[a-1];
        cout<<ans<<"\n";
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