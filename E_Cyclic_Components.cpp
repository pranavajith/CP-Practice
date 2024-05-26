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

void dfs(vector <ll> &vis, vector < vector <ll> > &v, ll vertex, vector <ll> &v1) {
    vis[vertex] = true;
    v1.push_back(vertex);
    for (auto d:v[vertex]){
        if (vis[d]) continue;
        dfs(vis, v, d, v1);
    }  
}

void solve(){
    ll n,m;
    cin>>n>>m;
    vector < vector <ll> > v(n+1);
    for (int i=0; i<m; i++){
        ll a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    vector <ll> vis(n+1, 0), v1;
    ll cnt = 0;
    for (ll i = 1; i<=n; i++){
        if (!vis[i]){
            v1.clear();
            dfs(vis, v, i, v1);
            bool check = true;
            for (auto d:v1){
                if (v[d].size() != 2) {
                    check = false; break;
                }
            }
            if (check) cnt++;
        }
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