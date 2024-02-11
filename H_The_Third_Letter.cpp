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

// const int N = 2e5+5;
// vector <pair<ll,ll> > vbig[N];
// vector<vector<ll> > queries(N, vector<ll> (3));
// int vis[N], val[N];

// void dfs(ll n) {
//     vis[n] = 1;
//     for (auto d:vbig[n]){
//         if (!vis[d.first])
//         {
//             val[d.first] = val[n] + d.second;
//             dfs(d.first);
//         }
//     }
// }

void dfs(int i, vector <ll> &vis, vector <ll> &val, vector < vector < pair <ll,ll> > > &adj) {
    vis[i] = 1;
    for (auto d:adj[i]){
        if (!vis[d.first]){
            val[d.first] = val[i] + d.second;
            dfs(d.first, vis, val, adj);
        }
    }
}

void solve(){
    ll n, m, a, b, dist;
    cin>>n>>m;
    vector < vector < pair <ll,ll> > > adj(n+1);
    vector <ll> vis(n+1, 0), val(n+1, 0);
    vector <vector <ll> > queries(m, vector <ll> (3, 0));
    for (int i=0; i<m; i++) {
        cin>>a>>b>>dist;
        adj[a].push_back(make_pair(b, dist));
        adj[b].push_back(make_pair(a, -dist));
        queries[i][0] = a, queries[i][1] = b, queries[i][2] = dist;
    }
    for (int i=1; i<=n; i++) {
        if (!vis[i]) dfs(i, vis, val, adj);
    }

    for (int i=1; i<=n; i++) {
        for (auto d:adj[i]){
            if (val[i] + d.second != val[d.first]){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";

    // for (auto d:queries) {
    //     if (val[d[0]] + d[2] != val[d[1]]){
    //         cout<<"NO\n";
    //         return;
    //     }
    // }
    // cout<<"YES\n";

    // vector<vector<ll> > queries(m, vector<ll> (3));
    // for (int i=0; i<m; i++) {
    //     cin>>a>>b>>dist;
    //     queries[i][0] = a, queries[i][1] = b, queries[i][2] = dist;
    //     vbig[a].push_back(make_pair(b, dist));
    //     vbig[b].push_back(make_pair(a, -1*dist));
    // }
    // for (int i=1; i<=n; i++) {  
    //     if (!vis[i]) dfs(i);
    // }
    // for (int i=0; i<m; i++) {
    //     if (val[queries[i][0]] + queries[i][2] != val[queries[i][1]]) {
    //         cout<<"NO\n";
    //         return;
    //     }
    // }
    // cout<<"YES\n";
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