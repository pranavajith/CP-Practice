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

void dfs(vector <pair <ll,ll> > &v, vector <vector <ll> > &adj, ll cur, ll parent, vector <vector <ll> > &dp){
    for (auto d:adj[cur]){
        if (d==parent) continue;
        dfs(v, adj, d, cur, dp);
        dp[cur][0] += max(dp[d][0] + abs(v[d].first - v[cur].first), dp[d][1] + abs(v[d].second - v[cur].first));
        dp[cur][1] += max(dp[d][0] + abs(v[d].first - v[cur].second), dp[d][1] + abs(v[d].second - v[cur].second));
    }
}

void solve(){
    ll n;
    cin>>n;
    vector <pair <ll,ll> > v(n+1);
    for (int i=1; i<=n; i++){
        ll a,b;
        cin>>a>>b;
        v[i] = make_pair(a,b);
    }
    vector <vector <ll> > adj(n+1);
    for (int i=0; i<n-1; i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector <vector <ll> > dp(n+1, vector <ll> (2, 0));
    ll end1 = -1;
    for (int i=1; i<=n; i++){
        if (adj[i].size() == 1){
            end1 = i; break;
        }
    }
    dfs(v, adj, end1, 0, dp);
    cout<<max(dp[end1][0], dp[end1][1])<<"\n";
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