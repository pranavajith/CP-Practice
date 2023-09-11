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

ll check(ll k, vector <ll> v){
    ll a=0;
    for (int i=0;i<v.size()-1;i++){
        a+=min(v[i+1]-v[i],k);
    }
    a+=k;
    return a;
}

void solve(){
    ll n,h;
    cin>>n>>h;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll l=1,r=h, mid;
    while (l<=r){
        // cout<<"hi! "<<"\n";
        mid = (l+r)/2;
        if (check(mid, v)>=h)r=mid-1;
        else l=mid+1;
        // cout<<l<<" "<<r<<" ";
        // cout<<mid<<"\n";
    }
    cout<<l<<"\n";
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