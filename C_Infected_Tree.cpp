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

void dfs(vector <vector <ll> > &adj, ll cur, ll parent, vector <ll> &numChild, vector <ll> &dp){
    ll s = 0;
    for (auto d:adj[cur]){
        if (d==parent)continue;
        dfs(adj, d, cur, numChild, dp);
        numChild[cur] += (numChild[d]);
        s += dp[d];
    }
    for (auto d:adj[cur]){
        if (d==parent)continue;
       dp[cur] = max(dp[cur], s - dp[d] + numChild[d] - 1);
    }

}
void solve(){
    ll n;
    cin>>n;
    vector <vector <ll> > adj(n+1);
    for (int i=0; i<n-1; i++){
        ll a,b; cin>>a>>b;
        adj[a].push_back(b); adj[b].push_back(a);
    }
    vector <ll> numChild(n+1, 1), dp(n+1, 0);
    dfs(adj, 1, 0, numChild, dp);
    cout<<dp[1]<<"\n";
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