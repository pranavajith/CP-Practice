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
bool check = true;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void dfs(vector <ll> &vis, vector < vector <ll> > &adj, ll cur, bool c, vector <ll> &v1, vector <ll> &v2){
    // vis[cur] = 1;
    if (c) {
        vis[cur] = 1; 
        v1.push_back(cur); 
    }
    else {
        vis[cur] = 2; 
        v2.push_back(cur);
    }
    for (auto d:adj[cur]){
        if ((vis[d] == 1 && c) || (vis[d] == 2 && !c)) {
            check = false; continue;
        }
        if (vis[d] == 0) dfs(vis, adj, d, !c, v1, v2);
    }
}

void solve(){
    // check = true;
    ll n,m;
    cin>>n>>m;
    vector < vector <ll> > adj(n+1);
    for (int i=0; i<m; i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector <ll> vis(n+1, 0), v1, v2;
    for (int i=1; i<=n; i++){
        if (!vis[i]){
            dfs(vis, adj, i, true, v1, v2);
        }
    }
    if (!check) cout<<-1<<"\n";
    else {
        cout<<v1.size()<<"\n"; for (auto d:v1) cout<<d<<" "; cout<<"\n";
        cout<<v2.size()<<"\n"; for (auto d:v2) cout<<d<<" "; cout<<"\n";
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