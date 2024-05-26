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
ll n,m;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

bool f(vector <string> &mat, ll i, ll j){
    if (i<0 || i>=n || j<0 || j>=m || mat[i][j] == 'B') return true;
    if (mat[i][j] == 'G') return false;
    mat[i][j] = '#'; return true;
}

void f1(vector <string> &mat, vector < vector <ll> > &dp, ll i, ll j){
    if (i<0 || i>=n || j<0 || j>=m || mat[i][j] == '#' || dp[i][j]) return;
    dp[i][j] = 1;
    f1(mat, dp, i-1, j);
    f1(mat, dp, i+1, j);
    f1(mat, dp, i, j-1);
    f1(mat, dp, i, j+1);

}

void solve(){
    // ll n,m;
    cin>>n>>m;
    vector <string> mat(n);
    for (int i=0; i<n; i++) cin>>mat[i];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            // cout<<i<<" "<<j<<" "<<mat[i][j]<<"\n";
            if (mat[i][j] == 'B'){
                // cout<<i<<" "<<j<<"\n";
                if (!(f(mat, i+1, j) && f(mat, i, j+1) && f(mat, i, j-1) && f(mat, i-1, j))) {
                    cout<<"No\n"; return;
                }
            }
        }
    }
    if (mat[n-1][m-1] == '#'){
        ll cnt = 0;
        for (auto &d:mat) cnt += count(d.begin(), d.end(), 'G');
        if (cnt) cout<<"No\n";
        else cout<<"Yes\n";
    }
    else {
        vector < vector <ll> > dp(n, vector <ll> (m, 0));
        f1(mat, dp, n-1, m-1);
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (mat[i][j] == 'G' && !dp[i][j]){
                    cout<<"No\n";
                    return;
                }
            }
        }
        cout<<"Yes\n";
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