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
ll cnt0 = 0, cnt1 = 0;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void dfs(ll vertex, ll parent, vector < vector <ll> > &adj, bool check){
    if (check) cnt0++;
    else cnt1++;
    for (auto d:adj[vertex]){
        if (d==parent) continue;
        dfs(d, vertex, adj, !check);
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
    dfs(1, 0, adj, true);
    cout<<cnt0*cnt1 - (n-1)<<"\n";
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