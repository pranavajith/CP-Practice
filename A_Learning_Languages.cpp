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


void dfs(vector <ll> &vis, vector <vector <ll> > &adj, ll vertex){
    vis[vertex] = 1;
    for (auto d:adj[vertex]){
        if (!vis[d]) dfs(vis, adj, d);
    }
}

void solve(){
    ll n,m;
    cin>>n>>m;
    ll cnt0 = 0;
    vector <ll> checkIf(m+1, 0);
    vector <ll> vis(m+1, 0);
    vector <vector <ll> > adj(m+1);
    for (int i=0; i<n; i++){
        ll a;
        cin>>a;
        if (a==0) cnt0++;
        else {
            ll b; cin>>b; a--;
            checkIf[b] = 1;
            while (a--){
                ll c; cin>>c;
                checkIf[c] = 1;
                adj[b].push_back(c);
                adj[c].push_back(b);
            }
        }
    }
    // for (int i=1; i<=m; i++){
    //     cout<<i<<" : "; for (auto d:adj[i]) cout<<d<<" "; cout<<"\n";
    // }
    ll cnt1 = 0;
    for (int i=1; i<=m; i++){
        if (!vis[i] && checkIf[i]){
            cnt1++;
            dfs(vis, adj, i);
        }
    }
    if (cnt1 == 0) cout<<cnt0<<"\n";
    else cout<<cnt1 + cnt0 - 1<<"\n";
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