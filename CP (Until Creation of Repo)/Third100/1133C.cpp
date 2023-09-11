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

void solve(){
    ll n;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    // for (auto d:v)cout<<d<<" ";cout<<"\n";
    ll count1=0, maxsize=0;
    
    for (int i=0;i<n;i++){
        // if (lower_bound(v.begin(),v.end(),v[i]+5) == v.end())break;
        ll a = lower_bound(v.begin(),v.end(),v[i]+6) - v.begin();
        // cout<<a<<"\n";

        maxsize = max(maxsize, a-i);
    }
    cout<<maxsize<<"\n";
}

int main() 
{
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}