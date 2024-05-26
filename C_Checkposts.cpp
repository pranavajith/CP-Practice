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

void dfs1(vector <ll> &vis, ll cur, vector < vector <ll> > &adj1, vector <ll> &orderFinish){
    vis[cur] = 1;
    for (auto d:adj1[cur]){
        if (vis[d]) continue;
        dfs1(vis, d, adj1, orderFinish);
    }
    orderFinish.push_back(cur);
}

void dfs2(vector <ll> &vis, ll cur, vector < vector <ll> > &adj2, vector <ll> &v){
    vis[cur] = 1;
    v.push_back(cur);
    for (auto d:adj2[cur]){
        if (vis[d]) continue;
        dfs2(vis, d, adj2, v);
    }
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> cost(n+1);
    for (int i=1; i<=n; i++) cin>>cost[i];
    ll m; cin>>m;
    vector < vector <ll> > adj1(n+1), adj2(n+1);
    for (int i=0; i<m; i++){
        ll a,b; cin>>a>>b;
        adj1[a].push_back(b);
        adj2[b].push_back(a);
    }
    vector <ll> orderFinish, vis(n+1, 0);
    for (int i=1; i<=n; i++){
        if (!vis[i]) {
            dfs1(vis, i, adj1, orderFinish);
        }
    }
    for (int i=1; i<=n; i++) vis[i] = 0;
    vector <ll> v;
    ll cnt = 0, ans = 1;
    while (!orderFinish.empty()){
        if (vis[orderFinish.back()]) {
            orderFinish.pop_back(); continue;
        }
        // cnt++;
        ll top = orderFinish.back(); orderFinish.pop_back();
        v.clear();
        dfs2(vis, top, adj2, v);
        ll min1 = 1e9;
        for (auto d:v) min1 = min(min1, cost[d]);
        cnt += min1;
        // ll a = count(v.begin(), v.end(), min1);
        ll toCheck = 0;
        for (auto d:v) {
            if (cost[d] == min1) toCheck++;
        }
        // cout<<a<<" ";
        ans = (ans * toCheck) % mod;
        // while (!orderFinish.empty() && vis[orderFinish.back()]) orderFinish.pop_back();
        // cout<<cnt<<" ";
    }
    // cout<<"\n";
    cout<<cnt<<" "<<ans<<"\n";
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