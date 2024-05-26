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
vector <ll> order(2e5+7);
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

// void dfs(vector < vector <ll> > adj, vector <ll> &depth, ll cur, ll parent){
//     for (auto d:adj[cur]){
//         if (d==parent) continue;
//         depth[d] = depth[cur]+1;
//         dfs(adj, depth, d, cur);
//     }
// }

bool sort1(ll a, ll b){
    return order[a]<order[b];
}

void solve(){
    ll n;
    cin>>n;
    vector < vector <ll> > adj(n+1);
    for (int i=0; i<n-1; i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector <ll> v(n+1, 0);
    for (int i=1; i<=n; i++) {
        cin>>v[i];
        order[v[i]] = i;
    }
    for (int i=1; i<=n; i++){
        sort(adj[i].begin(), adj[i].end(), sort1);
    }
    vector <ll> ans; ans.push_back(0);
    queue <ll> q;
    q.push(1);
    vector <ll> vis(n+1, 0);
    while (q.size()){
        ll t = q.front(); q.pop();
        ans.push_back(t);
        vis[t] = 1;
        for (auto d:adj[t]){
            if (vis[d]) continue;
            q.push(d);
        }
    }
    // for (auto d:ans) cout<<d<<" "; cout<<"\n";
    if (ans == v) cout<<"Yes\n";
    else cout<<"No\n";
    
    // vector <ll> depth(n+1, 1);
    // dfs(adj, depth, 1, 0);
    // // for (int i=1; i<=n; i++) cout<<depth[i]<<" ";
    // ll maxDepth = *max_element(depth.begin(), depth.end());
    // vector <ll> maxLol (maxDepth+1, 0);
    // for (int i=1; i<=n; i++) maxLol[depth[i]]++;
    // // for (int i=1; i<=maxDepth; i++) cout<<maxLol[i]<<" ";
    // ll curMin = 1;
    // for (int i=0; i<n; i++){
    //     ll a; cin>>a;
    //     if (depth[a] != curMin) {
    //         cout<<"No\n"; return;
    //     }
    //     maxLol[depth[a]]--;
    //     if (maxLol[depth[a]] == 0) curMin++;
    // }
    // cout<<"Yes\n";

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