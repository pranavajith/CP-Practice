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
ll n,m,k, cnt = 0;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

bool isValid(ll i, ll j){
    if (i<0 || i>=n || j<0 || j>=m) return false;
    return true;
}

bool isWall(ll i, ll j, vector<string> &v){
    if (v[i][j] == '*') return true;
    return false;
}

void dfs(ll i, ll j, vector<string> &v, vector < vector <ll> > &dp, vector < vector <ll> > &vis){
    if (vis[i][j]) return;
    // cout<<i<<" "<<j<<"\n"; 
    // cout<<cnt<<"\n";
    vis[i][j] = 1;
    if (isValid(i+1, j) && isWall(i+1, j, v)) cnt++;
    if (isValid(i, j+1) && isWall(i, j+1, v)) cnt++;
    if (isValid(i, j-1) && isWall(i, j-1, v)) cnt++;
    if (isValid(i-1, j) && isWall(i-1, j, v)) cnt++;
    if (isValid(i+1, j) && !isWall(i+1, j, v)) dfs(i+1, j, v, dp, vis);
    if (isValid(i-1, j) && !isWall(i-1, j, v)) dfs(i-1, j, v, dp, vis);
    if (isValid(i, j+1) && !isWall(i, j+1, v)) dfs(i, j+1, v, dp, vis);
    if (isValid(i, j-1) && !isWall(i, j-1, v)) dfs(i, j-1, v, dp, vis);
}
void dfs1(ll i, ll j, vector<string> &v, vector < vector <ll> > &dp, vector < vector <ll> > &vis1){
    if (vis1[i][j]) return;
    vis1[i][j] = 1;
    dp[i][j] = cnt;
    if (isValid(i+1, j) && !isWall(i+1, j, v)) dfs1(i+1, j, v, dp, vis1);
    if (isValid(i-1, j) && !isWall(i-1, j, v)) dfs1(i-1, j, v, dp, vis1);
    if (isValid(i, j+1) && !isWall(i, j+1, v)) dfs1(i, j+1, v, dp, vis1);
    if (isValid(i, j-1) && !isWall(i, j-1, v)) dfs1(i, j-1, v, dp, vis1);
}

void solve(){
    // ll n,m,k;
    // cnt = 
    cin>>n>>m>>k;
    vector<string>v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    vector < vector <ll> > dp(n, vector <ll> (m, 0));
    vector < vector <ll> > vis(n, vector <ll> (m, 0));
    vector < vector <ll> > vis1(n, vector <ll> (m, 0));
    // cnt = 0;
    for (int i=0; i<k; i++){
        ll a,b;
        cin>>a>>b; a--, b--;
        cnt = 0;
        dfs(a, b, v, dp, vis);
        dfs1(a, b, v, dp, vis1);
        cout<<dp[a][b]<<"\n";
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