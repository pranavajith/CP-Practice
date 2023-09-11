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
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a==1)v.push_back(i+1);
    }
    if (v.size()==0)cout<<0<<"\n";
    else if (v.size()==1)cout<<1<<"\n";
    else{
        ll sol = 1;
        // for (auto d:v)cout<<d<<" ";cout<<"\n";
        for (int i=1;i<v.size();i++){
            sol*=(v[i]-v[i-1]);
            // cout<<v[i]<<" "<<v[i-1]<<"\n";
        }
        cout<<sol<<"\n";
    }
    
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