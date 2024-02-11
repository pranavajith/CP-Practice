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



ll f(ll ind, vector <ll> &cost, vector <vector <ll> > &adj, vector <ll> &dp, map < ll,bool> &m) {
    if (m[ind]) return 0;
    if (dp[ind] != -1) return dp[ind];
    if (adj[ind].size() == 0) return cost[ind];
    ll mincost = 0;
    for (auto d:adj[ind]) {
        mincost += min(f(d, cost, adj, dp, m), cost[d]);
    }
    return dp[ind] = min(cost[ind], mincost);
}

void solve(){
    ll n,k;
    map <ll,bool> m;
    // m.clear();
    cin>>n>>k;
    vector <ll> cost(n+1);
    for (int i=1; i<=n; i++) cin>>cost[i];
    for (int i=0; i<k; i++) {
        ll a;
        cin>>a;
        m[a]=true;
    }
    vector <vector <ll> > adj(n+1);
    for (int i=1; i<=n; i++) {
        ll a;
        cin>>a;
        while (a--) {
            ll b;
            cin>>b;
            adj[i].push_back(b);
        }
    }
    vector <ll> dp(n+1, -1);
    for (int i=1; i<=n; i++) {
        cout<<f(i, cost, adj, dp, m)<<" ";
    }
    cout<<"\n";
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