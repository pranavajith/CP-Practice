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
bool check = false;
ll n,m;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void f(ll i, ll j, vector <vector <ll> > &vis, vector <string> &v, ll cur, char c, ll d){
    if (i<0 || i>=n || j<0 || j>=m || v[i][j] != c) return;
    // cout<<i<<" "<<j<<"\n";
    if (vis[i][j] == cur) {
        check = true;
        return;
    }
    vis[i][j] = cur;
    // 0 -> just came down
    // 1 -> just came up
    // 2 -> just came right
    // 3 -> just came left
    if (d != 0) f(i-1, j, vis, v, cur, c, 1);
    if (d != 1) f(i+1, j, vis, v, cur, c, 0);
    if (d != 2) f(i, j-1, vis, v, cur, c, 3);
    if (d != 3) f(i, j+1, vis, v, cur, c, 2);
}

void solve(){
    // ll n,m;
    cin>>n>>m;
    vector <string> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    vector <vector <ll> > vis(n, vector <ll> (m, 0));
    ll cur = 1;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (vis[i][j] == 0){
                f(i, j, vis, v, cur, v[i][j], -1);
                cur++;
            }
            if (check){
                cout<<"Yes\n";
                return;
            }
        }
    }
    cout<<"No\n";
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