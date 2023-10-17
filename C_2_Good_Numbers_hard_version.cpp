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

vector <ll> allpowers3;

ll dp(ll i, ll m, ll n){
    if (m>=n)return m;
    if (i>38)return LLONG_MAX;
    return min(dp(i+1, m+allpowers3[i], n), dp(i+1, m, n));
}

void solve(){
    ll n;
    cin>>n;
    cout<<dp(0, 0, n)<<"\n";
    
}

int main() 
{
    allpowers3.push_back(1);
    for (ll i = 1; i<=38; i++){
        allpowers3.push_back(allpowers3.back()*3);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}