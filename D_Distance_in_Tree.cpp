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
ll k, ans = 0;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void dfs(vector < vector <ll> > &adj, vector < vector <ll> > &dp, ll cur, ll parent){
    for (auto d:adj[cur]){
        if (d==parent) continue;
        dfs(adj, dp, d, cur);
        // for (i)
        for (int i=0; i<k; i++){    
            ans += dp[cur][i] * dp[d][k-1-i];
        }
        for (int i=0; i<k; i++){
            dp[cur][i+1] += dp[d][i];
        }
    }
}

void solve(){
    ll n;
    cin>>n>>k;
    vector < vector <ll> > adj(n+1), dp(n+1, vector <ll> (k+1, 0));
    for (int i=1; i<=n; i++) dp[i][0] = 1;
    for (int i=0; i<n-1; i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    ll start = 1;
    for (int i=1; i<=n; i++){
        if (adj[i].size() == 1) {
            start = i; break;
        }
    }
    // cout<<start<<"\n";
    dfs(adj, dp, start, 0);
    // ll ans = 0;
    // for (int i=1; i<=n; i++){
    //     ans += dp[i][k];
    // }
    // for (int i=1; i<=n; i++){
    //     for (auto d:dp[i]) cout<<d<<" "; cout<<"\n";
    // }
    cout<<ans<<"\n";
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