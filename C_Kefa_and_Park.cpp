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
ll cnt = 0, m;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void dfs(ll vertex, vector <ll> &v, ll parent, vector < vector <ll> > &adj, ll cont){
    // cout
    if (adj[vertex].size() == 1 && vertex != 1) {
        cnt++;
        return;
    }
    for (auto d:adj[vertex]){
        if (d == parent || (cont + v[d]) > m) continue;
        if (v[d]) dfs(d, v, vertex, adj, cont + v[d]);
        else dfs(d, v, vertex, adj, 0LL);
        // dfs(d, v, vertex, adj, numCats + v[d]);
    }
}

void solve(){
    // cnt = 0;
    ll n;
    cin>>n>>m;
    vector <ll> v(n+1);
    for (int i=1; i<=n; i++) cin>>v[i];
    vector < vector <ll> > adj(n+1);
    for (int i=0; i<n-1; i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1, v, 0, adj, v[1]);
    cout<<cnt<<"\n";
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