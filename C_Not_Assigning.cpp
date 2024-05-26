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
ll iter = 0;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void dfs1(vector <ll> &parent, vector < vector <ll> > &adj, ll vertex, ll p, vector <ll> &ans){
    parent[vertex] = p;
    if (iter % 2) ans[vertex] = 2;
    else ans[vertex] = 3;
    iter++;
    for (auto d: adj[vertex]){
        if (d==p) continue;
        dfs1(parent, adj, d, vertex, ans);
    }
}


void solve(){
    ll n;
    cin>>n;
    vector < vector <ll> > adj(n+1);
    vector < pair <ll,ll> > v1;
    for (int i=0; i<n-1; i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b); adj[b].push_back(a);
        v1.push_back(make_pair(a,b));
    }
    for (int i=1; i<=n; i++){
        if (adj[i].size() > 2) {
            cout<<-1<<"\n";
            return;
        }
    }
    ll end1;
    for (int i=1; i<=n; i++) {
        if (adj[i].size() == 1) {
            end1 = i; break;
        }
    }
    vector <ll> parent(n+1), ans(n+1);
    dfs1(parent, adj, end1, -1, ans);
    for (auto d:v1){
        // ll a1 = d.first;
        if (d.second == parent[d.first]) cout<<ans[d.first]<<" ";
        else cout<<ans[d.second]<<" ";
    }
    cout<<"\n";
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