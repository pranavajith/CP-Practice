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

ll f(vector<vector<ll> > &adj, vector <ll> &vis, vector <ll> &cost, ll ind, ll min1){
    if (vis[ind]) return 1e9;
    vis[ind] = 1;
    // ll min2 = 1e9;
    for (auto d:adj[ind]){
        min1 = min(min1, min(cost[ind], f(adj, vis, cost, d, min1)));
    }
    return min1;
}

void solve(){
    ll n,m;
    cin>>n>>m;
    vector <ll> cost(n+1);
    vector <ll> vis(n+1, 0);
    for (int i=1; i<=n; i++) cin>>cost[i];
    vector<vector<ll> >adj(n+1);
    while (m--){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    ll ans = 0;
    for (int i=1; i<=n; i++){
        if (!vis[i]){
            ans += f(adj, vis, cost, i, cost[i]);
        }
    }
    cout<<ans<<"\n";
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