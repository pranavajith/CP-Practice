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
bool check = true;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void dfs1(vector <ll> &vis, vector <vector <ll> > &adj, ll cur, ll parent) {
    vis[cur] = vis[parent] + 1;
    for (auto d:adj[cur]){
        if (vis[d]){
            if (abs(vis[d] - vis[cur]) % 2 == 0) {
                check = false;
                return;
            }
        }
        else {
            dfs1(vis, adj, d, cur);
        }
    }
}
void dfs2(vector <ll> &vis, vector <vector <ll> > &adj, ll cur, ll temp, vector <ll> &assig) {
    vis[cur] = 1; assig[cur] = temp;
    // cout<<cur<<" "<<temp<<"! \n";
    for (auto d:adj[cur]){
        if (vis[d]) continue;
        dfs2(vis, adj, d, 3 - temp, assig);
    }
}

void solve(){
    check = true;
    ll n,m;
    cin>>n>>m;
    // map < pair <ll,ll>, ll> m1;
    vector <vector <ll> > adj(n+1);
    vector <pair <ll,ll> > v;
    ll cnt = 1;
    for (int i=0; i<m; i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b); adj[b].push_back(a);
        v.push_back(make_pair(a,b));
    }
    // 1 = away, 2 = towards
    ll start = 1;
    for (int i=1; i<=n; i++) {
        if (adj[i].size() == 1) {
            start = i;
            break;
        }
    }
    vector <ll> vis(n+1, 0), assig(n+1, 0);
    dfs1(vis, adj, start, 0);
    if (!check){
        cout<<"NO\n"; return;
    }
    cout<<"YES\n";
    for (int i=1; i<=n; i++) vis[i] = 0;
    dfs2(vis, adj, start, 1, assig);
    // for (int i=1; i<=n; i++) cout<<assig[i]<<" "; cout<<"\n";
    for (int i=0; i<m; i++){
        if (assig[v[i].first] == 1) cout<<0;
        else cout<<1;
    }
    cout<<"\n";

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