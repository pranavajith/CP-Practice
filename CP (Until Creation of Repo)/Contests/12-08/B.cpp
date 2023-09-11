#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector < vector <ll> > v_big;
    for (int i=0;i<n;i++){
        ll m;
        cin>>m;
        vector <ll> v;
        for (int j=0;j<2;j++){
            ll o;
            cin>>o;
            v.push_back(o);
        }
        sort(v.begin(),v.end());
        v_big.push_back(v);
    }
    
}

int main() 
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}