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
    vector <ll> v(n+1);
    for (int i=1; i<=n; i++) cin>>v[i];
    vector <ll> dp(n+1, 1);
    for (int i=1; i<=n; i++){
        for (int j=2*i; j<=n; j+=i){
            if (v[j] > v[i]) dp[j] = max(dp[j], dp[i]+1);
        }
    }
    cout<<*max_element(dp.begin(), dp.end())<<"\n";
    // ll ans = 0;
    // for (int i=1; i<=n; i++) ans = max(ans, dp[i]); 
    // cout<<ans<<"\n";
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