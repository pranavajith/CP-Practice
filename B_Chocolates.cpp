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
ll a,b,c;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

ll f(ll rem, ll maxAns, vector <ll> &dp){
    if (rem < 0) return -1e9;
    if (rem == 0) return maxAns;
    if (dp[rem]) return dp[rem];
    return dp[rem] = max(max(f(rem - a, maxAns + 1, dp), f(rem-b, maxAns+1, dp)), f(rem-c, maxAns+1, dp));
}

void solve(){
    ll n;
    cin>>n>>a>>b>>c;
    vector <ll> dp(n+1, 0);
    cout<<f(n, 0, dp)<<"\n";
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