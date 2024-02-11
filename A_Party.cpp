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

ll dfs(vector <vector <ll> > &adj, int child) {
    if (adj[child].size()==0) return 1;
    ll ans = 0;
    for (auto d:adj[child]) {
        ans = max(ans, 1 + dfs(adj, d));
    }
    return ans;
}

void solve(){
    vector <ll> no_manager;
    ll n; cin>>n;
    vector <vector <ll> > adj(n+2);
    ll a;
    for (int i=0; i<n; i++) {
        cin>>a;
        if (a==-1) no_manager.push_back(i+1);
        else {
            adj[i+1].push_back(a);
        }
    }
    ll ans = 1;
    for (auto d:no_manager){
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