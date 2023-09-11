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
    vector <ll> v, v1;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
        v1.push_back(a);
    }
    // sort(v1.begin(),v1.end());
    // if (v1==v)cout<<0<<"\n";
    // for (int i=0;)
    ll sol = 0;
    for (int i=0;i<n-1;i++){
        if (v[i]>v[i+1])sol = max(sol, v[i]);
    }
    cout<<sol<<"\n";
    
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