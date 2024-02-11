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
ll mod = 1e8;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

ll limit_X, limit_Y;
ll dp[101][101][11][11];

ll check(ll f, ll h, ll k1, ll k2) {
    if (f+h == 0) return 1;
    if (dp[f][h][k1][k2] != -1) return dp[f][h][k1][k2];
    ll x = 0, y = 0;
    if (f>0 && k1 > 0) x = check(f-1, h, k1 - 1, limit_Y);
    if (h>0 && k2 > 0) y = check(f, h-1, limit_X, k2-1);
    return dp[f][h][k1][k2] = (x + y) % mod;
}
 
void solve(){
    ll f,h;
    cin>>f>>h>>limit_X>>limit_Y;
    for (int i=0; i<=f; i++){
        for (int j=0; j<=h; j++){
            for (int k=0; k<=limit_X; k++) {
                for (int l = 0; l <=limit_Y; l++){
                    dp[i][j][k][l] = -1;
                }
            }
        }
    }
    cout<<check(f,h,limit_X,limit_Y)<<"\n";
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