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

ll dfs(vector<vector<ll> > &adj, ll next){
    if (adj[next].size() == 0) return 1;
    ll ans = 0;
    for (auto d:adj[next]){
        ans = max(ans, 1 + dfs(adj, d));
    }
    return ans;
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> none;
    vector<vector<ll> > adj(n+1);
    for (int i=0; i<n; i++){
        ll a;
        cin>>a;
        if (a==-1) none.push_back(i+1);
        else adj[a].push_back(i+1);
    }
    ll ans = 1;
    // for (int i=1; i<=n; i++){
    //     cout<<i<<" : "; for (auto d:adj[i]) cout<<d<<" "; cout<<"\n";
    // }
    // for (auto d:none) cout<<d<<" "; cout<<"\n";
    for (auto d:none){
        ans = max(ans, dfs(adj, d));
    }
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