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
    ll n;
    cin>>n;
    vector <ll> adj(n+1);
    for (int i=0; i<n; i++) {
        ll a; cin>>a;
        // cin>>v[i];
        adj[i+1] = a;
    }
    for (int i=1; i<=n; i++) {
        vector <ll> vis(n+1, 0);
        ll cur = i;
        while (!vis[cur]){
            vis[cur] = 1; cur = adj[cur];
        }
        cout<<cur<<" ";
    }
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