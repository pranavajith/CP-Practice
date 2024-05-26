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
    vector < vector <pair <ll,ll> > > v(n+1);
    for (int i=0; i<m; i++){
        ll a,b,c;
        cin>>a>>b>>c;
        v[a].push_back(make_pair(b,c));
        v[b].push_back(make_pair(a,c));
    }
    vector <ll> vis(n+1, 0), dist(n+1, 1e18), parent(n+1, 0);
    set <pair <ll,ll> > s;
    s.insert(make_pair(0, 1));
    dist[1] = 0;
    while (s.size()){
        // cout<<"ok\n";
        auto p = *s.begin(); 
        ll node = p.second; s.erase(s.begin());
        if (vis[node]) continue;
        // cout<<"ok\n";
        vis[node] = 1;
        for (auto d:v[node]){
            ll child = d.first, wt = d.second;
            if (dist[child] > dist[node] + wt){
                dist[child] = dist[node] + wt;
                parent[child] = node;
                s.insert(make_pair(dist[child], child));
            }
        }
    }
    // for (auto d:dist) cout<<d<<" "; cout<<"\n";
    if (dist[n] == 1e18) {
        cout<<-1<<"\n";
        return;
    }
    ll cur = n;
    vector <ll> ans;
    while (cur != 0){
        ans.push_back(cur); cur = parent[cur];
    }
    // ans.push_back(1);
    reverse(ans.begin(), ans.end());
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