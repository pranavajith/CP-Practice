#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,a,b,c, sol = 0;
    cin>>n>>a>>b>>c;
    vector <ll> dp(n+a+b+c+1,0);
    dp[0]=1;
    for (int i=0;i<n;i++){
        if (dp[i]!=0)dp[i+a]=max(dp[i+a],dp[i]+1);
        if (dp[i]!=0)dp[i+b]=max(dp[i+b],dp[i]+1);
        if (dp[i]!=0)dp[i+c]=max(dp[i+c],dp[i]+1);
    }
    cout<<dp[n]-1<<"\n";
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