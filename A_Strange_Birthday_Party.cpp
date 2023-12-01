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
    vector <ll> v(n), v2(m);
    for (int i=0; i<n; i++) cin>>v[i];
    for (int i=0; i<m; i++) cin>>v2[i];
    // vector <ll> temp(3);
    pair <ll,ll> p;
    vector <pair <ll,ll> > vp;
    for (int i=0; i<n; i++){
        p.first = v[i];
        p.second = v2[v[i]-1];
        vp.push_back(p);
    }
    ll ans = 0;
    sort(vp.rbegin(), vp.rend());
    reverse(v2.begin(), v2.end());
    for (int i=0; i<n; i++){
        if (vp[i].second > v2.back()){
            ans+=v2.back();
            v2.pop_back();
        }
        else ans+=vp[i].second;
    }
    cout<<ans<<"\n";
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