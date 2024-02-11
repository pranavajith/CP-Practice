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

ll f(ll curNum, ll ind, ll k, ll n, vector <vector <ll> > &dp) {
    if (ind == k) return 1;
    if (dp[ind][curNum] != -1) return dp[ind][curNum];
    ll ans1 = 0;
    for (ll i=curNum; i<=n; i += curNum) {
        if (i > n) break;
        ans1 = (ans1 + f(i, ind+1, k, n, dp)) % mod;
    }
    return dp[ind][curNum] = ans1;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector <vector <ll> > dp(k+1, vector <ll> (n+1, -1));
    ll ans2 = 0;
    for (ll i = 1; i <= n; i++) {
        ans2 = (ans2 + f(i, 1, k, n, dp)) % mod;
    }
    cout<<ans2<<"\n";
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