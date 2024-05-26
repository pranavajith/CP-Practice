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

void dfs(vector <ll> &vis, vector <vector <ll> > &adj, ll cur){
    vis[cur] = 1;
    for (auto d:adj[cur]){
        if (vis[d]) continue;
        dfs(vis, adj, d);
    }
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> vis1(26, 0), vis(26, 0);
    vector <vector <ll> > adj(27);
    ll cnt = 0;
    for (int i=0; i<n; i++){
        string a; cin>>a; 
        vis1[a[0]-'a'] = 1;
        for (int i=1; i<a.size(); i++){
            vis1[a[i] - 'a'] = 1;
            adj[a[0] - 'a'].push_back(a[i]-'a');
            adj[a[i] - 'a'].push_back(a[0]-'a');
        }
    }
    // ll cnt = 0;
    // for (int i=0; i<26; i++){
    //     cout<<char('a' + i)<<" : "; for (auto d:adj[i]) cout<<char('a' + d)<<" "; cout<<"\n";
    // }
    for (int i=0; i<26; i++){
        if (!vis1[i] || vis[i]) continue;
        // cout<<char('a' + i)<<" ";
        dfs(vis, adj, i);
        cnt++;
    }
    cout<<cnt<<"\n";
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