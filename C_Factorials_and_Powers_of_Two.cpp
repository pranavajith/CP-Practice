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

vector <ll> fact(16, 1);

ll ans(ll n, ll num){
    if (fact[n] > num){
        return __builtin_popcountll(num);
    }
    return min(ans(n+1, num), 1+ans(n+1, num-fact[n]));
}

void solve(){
    ll n;
    cin>>n;
   cout<<ans(1,n)<<"\n";
}

int main() 
{   
    for (int i=2; i<=15; i++){
        fact[i] = fact[i-1]*i;
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}