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
    ll n,m;
    cin>>n>>m;
    vector < vector <ll> > adj(n+1);
    for (int i=0; i<m; i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector <ll> dist(n+1, 0), vis(n+1, 0);
    vis[1] = 1;
    queue <ll> q;
    q.push(1);
    while (!q.empty()){
        ll t = q.front();
        q.pop();
        for (auto d:adj[t]){
            if (vis[d]) continue;
            vis[d] = 1;
            dist[d] = dist[t]+1;
            q.push(d);
        }
    }
    vector <ll> even, odd;
    for (int i=1; i<=n; i++){
        if (dist[i]%2) odd.push_back(i);
        else even.push_back(i);
    }
    if (odd.size() <= n/2) {
        cout<<odd.size()<<"\n"; for (auto d:odd) cout<<d<<" "; cout<<"\n";
    }
    else {
        cout<<even.size()<<"\n"; for (auto d:even) cout<<d<<" "; cout<<"\n";
    }
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