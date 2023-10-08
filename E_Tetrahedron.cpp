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
    ll n;
    cin>>n;
    ll mod = 1000000007;
    ll d = 1;
    ll abc = 0;
    for (int i=1; i<=n; i++){
        int d1 = (3*abc)%mod;
        int abc1 = (2*abc + d)%mod;
        d = d1%mod;
        abc = abc1%mod;
    }
    cout<<d;
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