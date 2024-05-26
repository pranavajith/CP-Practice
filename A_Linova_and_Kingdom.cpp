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

void dfs(vector <ll> &dep, vector <ll> &below, vector <vector <ll> > &adj, ll cur, ll parent){
    for (auto d:adj[cur]){
        if (d==parent) continue;
        dep[d] = dep[cur]+1;
        dfs(dep, below, adj, d, cur);
        below[cur] += below[d];
    }
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector <vector <ll> > adj(n+1);
    for (int i=0; i<n-1; i++) {
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector <ll> dep(n+1, 1), below(n+1, 1); 
    dfs(dep, below, adj, 1, 0);
    vector <ll> ans;
    for (int i=1; i<=n; i++){
        ans.push_back(below[i] - dep[i]);
    }
    sort(ans.rbegin(), ans.rend()); ll ans1 = 0;
    for (int i=0; i<n-k; i++) ans1 += ans[i];
    cout<<ans1<<"\n";
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