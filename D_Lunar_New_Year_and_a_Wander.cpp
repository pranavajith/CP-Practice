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

void solve(){
    priority_queue<int, vector<int>, greater<int> > q; 
    ll n,m;
    cin>>n>>m;
    vector < vector <ll> > adj(n+1);
    for (int i=0; i<m; i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector <ll> vis(n+1, 0);
    vis[1] = 1;
    vector <ll> ans;
    q.push(1);
    while (!q.empty()){
        // ans.push_back()
        ll t = q.top();
        ans.push_back(t);
        // vis[t] = 1;
        q.pop();
        for (auto d:adj[t]){
            if (vis[d]) continue;
            vis[d] = 1;
            q.push(d);
        }
    }
    for (auto d:ans) cout<<d<<" "; cout<<"\n";
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