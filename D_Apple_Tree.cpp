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

void dfs(ll vertex, vector < vector <ll> > &adj, ll par, vector <ll> &ans){
    if (vertex != 1 && adj[vertex].size() == 1) {
        ans[vertex] = 1; return;
    }
    for (auto d:adj[vertex]){
        if (d==par) continue;
        dfs(d, adj, vertex, ans);
        ans[vertex] += ans[d];
    }
}

void solve(){
    ll n; cin>>n;
    vector < vector <ll> > adj(n+1);
    for (int i=0; i<n-1; i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector <ll> ans(n+1, 0);
    dfs(1, adj, 0, ans);
    ll q; cin>>q;
    while (q--){
        ll a,b;
        cin>>a>>b;
        cout<<ans[a]*ans[b]<<"\n";
    }
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