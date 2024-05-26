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

void dfs(ll cur, ll parent, vector <ll> &vis, vector < vector <ll> > &adj) {
    vis[cur] = vis[parent]+1;
    for (auto d:adj[cur]){
        if (d == parent) continue;
        if (vis[d] && abs(vis[d] - vis[cur]) % 2 == 0) {
            check = false;
        }
        if (!vis[d]) dfs(d, cur, vis, adj);
    }
}

void solve(){
    check = true;
    ll n;
    cin>>n;
    vector < pair <ll,ll> > v(n);
    vector <ll> check1(n+1, 0);
    for (int i=0; i<n; i++) {
        cin>>v[i].first>>v[i].second;
        if (v[i].first == v[i].second){
            check = false;
        }
        check1[v[i].first]++;
        check1[v[i].second]++;
    }
    if (!check){
        cout<<"NO\n";
        return;
    }
    for (int i=1; i<=n; i++){
        if (check1[i] != 2) {
            cout<<"NO\n";
            return;
        }
    }
    vector < vector <ll> > adj(n+1);
    vector <ll> used(n+1, 0);
    for (int i=0; i<n; i++){
        if (used[v[i].first]) {
            adj[used[v[i].first]].push_back(i+1);
            adj[i+1].push_back(used[v[i].first]);
        }
        else used[v[i].first] = i+1;
        if (used[v[i].second]) {
            adj[used[v[i].second]].push_back(i+1);
            adj[i+1].push_back(used[v[i].second]);
        }
        else used[v[i].second] = i+1;
    }
    // for (int i=1; i<=n; i++) {
    //     cout<<i<<" : "; for (auto d:adj[i]) cout<<d<<" "; cout<<"\n";
    // }
    vector <ll> vis(n+1, 0);
    for (int i=1; i<=n; i++){
        if (!vis[i]) {
            dfs(i, 0, vis, adj);
        }
    }
    if (check) cout<<"YES\n";
    else cout<<"NO\n";
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