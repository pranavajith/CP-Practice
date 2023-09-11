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
    ll n,k, pref=0;
    cin>>n>>k;
    vector <ll> v;
    vector <ll> v1;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        pref += a;
        v.push_back(a);
        v1.push_back(pref);
    }
    ll ans = 0;
    double lol = 1;
    // for (auto d:v)cout<<d<<" ";cout<<"\n";
    // for (auto d:v1)cout<<d<<" ";cout<<"\n";
    for (int i=n-1;i>=1;i--){
        v1[i-1]+=ans;
        // for (auto d:v1)cout<<d<<" ";cout<<"\n";
        // cout<<ceil(v[i]*100/k)<<"\n";
        if (v1[i-1]<ceil(lol*v[i]*100/k)){
            v[0]+=ceil(lol*v[i]*100/k)-v1[i-1];
            ans+=ceil(lol*v[i]*100/k)-v1[i-1];
            // cout<<ceil(lol*v[i]*100/k)-v1[i-1]<<" ";
        }
    }
    cout<<ans<<"\n";
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}