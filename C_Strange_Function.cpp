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
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

ll N = 1e9+7;

ll gcd(ll a, ll b){
    if (b==0)return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return a*b/gcd(a,b);
}

void solve(){

    ll n;
    cin>>n;
    ll ans = 0, curlcm = 1, iter = 2;
   for (ll i = 1; i<=n; i++){
    curlcm = lcm (curlcm, i);
    if (curlcm > n)break;
    ans+=n/curlcm;
   }
    cout<<(ans+n)%N<<"\n";
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