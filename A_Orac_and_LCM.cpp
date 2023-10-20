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

ll gcd (ll a, ll b){
    if (b==0)return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return (a*b)/gcd(a,b);
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++)cin>>v[i];
    vector <ll> pre(n), suf(n);
    for(int i=0; i<n; i++){
        if (i==0)pre[i] = v[i];
        else pre[i] = gcd(v[i], pre[i-1]);
    }
    for (int i=n-1; i>=0; i--){
        if (i==n-1)suf[i]=v[i];
        else suf[i] = gcd(v[i], suf[i+1]);
    }
    ll ans = 1;
    for (int i=0; i<n; i++){
        if (i==0){
            ans = lcm(ans, suf[i+1]);
        }
        else if (i==n-1){
            ans = lcm (ans, pre[i-1]);
        }
        else{
            ll temp = gcd(pre[i-1], suf[i+1]);
            ans = lcm(ans, temp);
        }
    }
    cout<<ans<<"\n";
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