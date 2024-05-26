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
ll edges = 0, vertices = 0;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void dfs(ll vertex, vector <ll> &vis, vector <vector <ll> > &adj){
    // cout<<vertex<<" "<<edges<<" !\n";
    vertices++;
    vis[vertex] = 1;
    for (auto d:adj[vertex]){
        if (vis[d]) continue;
        edges++;
    }
    for (auto d:adj[vertex]){
        if (vis[d]) continue;
        dfs(d, vis, adj);
    }
    
}

void solve(){
    ll n, m;
    cin>>n>>m;
    vector <vector <ll> > adj(n+1);
    for (int i=0; i<m; i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector <ll> vis(n+1, 0);
    for (int i=1; i<=n; i++){
        if (!vis[i]){
            edges = 0, vertices = 0;
            dfs(i, vis, adj);
            // cout<<edges<<" "<<vertices<<"\n";
            if (edges != (vertices * (vertices - 1) / 2)) {
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
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