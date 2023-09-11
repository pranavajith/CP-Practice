#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

ll sum1(vector <ll> v, ll n, ll c){
    ll a=0;
    for (auto d:v){
        a+=(d+2*n)*(d+2*n);
        if (a>c)return a;
    }
    return a;
}

void solve(){
    ll n,c;
    cin>>n>>c;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll l=0,r=1e9;
    // cout<<sum1(v,2);
    while (l<=r){
        ll mid = l+(r-l)/2;
        if (sum1(v, mid, c)>c)r = mid-1;
        else l = mid+1;
    }
    cout<<r<<"\n";
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