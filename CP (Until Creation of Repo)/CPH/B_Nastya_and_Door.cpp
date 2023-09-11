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
    ll n,k;
    cin>>n>>k;
    vector <ll> v(n);
    vector <ll> v2(n);
    vector <ll> v1;
    for (int i=0;i<n;i++)cin>>v2[i];
    v[0]=0, v[n-1]=0; 
    for (int i=1;i<n-1;i++){
        if (v2[i]>v2[i-1] && v2[i]>v2[i+1])v[i]=1;
        else v[i]=0;
    }
    // for (auto d:v)cout<<d<<" ";cout<<"\n";
    ll ans = -1 , l = -1, now = 0;
    for (ll i = 1 ; i+1 < k; i++){
        if (v[i])now++;
    }
    ans = now+1, l = 0;
    for (ll i = k; i < n ; i++){
        if (v[i-k+1])now--;
        if (v[i-1])now++;
        if (now+1>ans){
            ans = now+1;
            l = i-k+1;
        }
    }
    cout<<ans<<" "<<l+1<<"\n";
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