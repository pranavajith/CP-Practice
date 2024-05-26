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

void dfs1(vector <ll> &vis, vector <vector <ll> > &adj, ll vertex, vector <ll> &temp){
    if (vis[vertex]) return;
    vis[vertex] = true;
    temp.push_back(vertex);
    for (auto d:adj[vertex]){
        dfs1(vis, adj, d, temp);
    }
}

void solve(){
    ll n,m;
    cin>>n>>m;
    vector <ll> vis(n+1, 0), ans(n+1, 1);
    vector <vector <ll> > adj(n+1);
    for (int i=0; i<m; i++){
        ll a; cin>>a;
        if (a==0) continue;
        ll b; cin>>b;
        for (int j=0; j<a-1; j++){
            ll c; cin>>c;
            adj[b].push_back(c);
            adj[c].push_back(b);
        }
    }
    vector <ll> temp;
    for (int i=1; i<=n; i++){
        if (!vis[i]){
            temp.clear();
            dfs1(vis, adj, i, temp);
            for (auto d:temp) ans[d] = temp.size();
        }
    }
    for (int i=1; i<=n; i++) cout<<ans[i]<<" "; cout<<"\n";
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