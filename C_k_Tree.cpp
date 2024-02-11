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

ll f(vector <vector <int> > &dp, int rem, int k, int d, int check){
    if (rem == 0) {
        if (check) return 1;
        return 0;
    }
    if (dp[rem][check] != -1) return dp[rem][check];
    ll ans1 = 0;
    for (int i=1; i<=k; i++) {
        int check1 = 0;
        if (i>=d || check) check1 = 1;
        if (i<=rem) ans1 = (ans1 + f(dp, rem-i, k, d, check1)) % mod;
        else break;
    }
    return dp[rem][check] = ans1;
}

void solve(){
    ll n,k,d;
    cin>>n>>k>>d;
    // vector <ll> dp(n+1, -1);
    vector <vector <int> > dp(n+1, vector <int> (2, -1));
    cout<<f(dp, n, k, d, 0)<<"\n";
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