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

ll dfs(vector < vector <ll> > &v, vector < vector <ll> > &vis, ll i, ll j){
    if (i<0 || i>=v.size() || j<0 || j>=v[0].size() || v[i][j] == 0 || vis[i][j]) return 0;
    vis[i][j] = 1;
    return v[i][j] + dfs(v, vis, i+1, j) + dfs(v, vis, i-1, j) + dfs(v, vis, i, j-1) + dfs(v, vis, i, j+1);
}

void solve(){
    ll n,m;
    cin>>n>>m;
    // vector <ll> v(n);
    // for (int i=0; i<n; i++) cin>>v[i]; 
    vector < vector <ll> > v(n, vector <ll> (m));
    vector < vector <ll> > vis(n, vector <ll> (m, 0));
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++) cin>>v[i][j];
    }
    ll ans = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++){
            if (v[i][j] != 0 && !vis[i][j]) ans = max(ans, dfs(v, vis, i, j));
        }
    }
    cout<<ans<<"\n";
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