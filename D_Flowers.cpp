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
    ll n,k;
    cin>>n>>k;
    vector <ll> dp(1e5+1);
    dp[0] = 1;
    for (ll i = 1; i<=1e5; i++){
        if (i<k) dp[i] = dp[i-1];
        else dp[i] = (dp[i-1]+dp[i-k]) % mod;
    }
    vector <ll> sum(1e5+1);
    sum[0]=1;
    for (int i=1; i<=1e5; i++){
        sum[i] = (sum[i-1] + dp[i]) % mod;
    }
    // for (int i=1; i<=1e5; i++){
    //     dp[i] = (dp[i-1] + dp[i]) % mod;
    // }
    while (n--){
        ll a,b;
        cin>>a>>b;
        cout<<((sum[b]-sum[a-1]) + mod) % mod<<"\n";
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