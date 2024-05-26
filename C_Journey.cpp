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
double ans = 0; 
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void dfs(ll vertex, ll parent, vector < vector <ll> > &adj, double len, double prob){
    if (vertex != 1 && adj[vertex].size() == 1) {
        // cout<<vertex<<" "<<len<<" "<<prob<<"\n";
        ans += (len * prob);
        return;
    }
    for (auto d: adj[vertex]){
        if (d==parent) continue;
        if (vertex == 1) dfs(d, vertex, adj, len+1, prob / adj[vertex].size());
        else dfs(d, vertex, adj, len+1, prob / (adj[vertex].size() - 1));
    }
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
    dfs(1, 0, adj, 0, 1);
    cout<<setprecision(18)<<ans<<"\n";
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