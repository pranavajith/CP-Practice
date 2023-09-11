#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a<0){ 
            v.push_back(0-a);
        }
    }

    if (v.size()==0){
        cout<<0<<endl;
    }
    else{
    sort(v.begin(),v.end(),greater<ll>());
    ll sum = 0;
    ll siz = v.size();
    ll len = min(siz,m);
    for (int i=0;i<len;i++){
        sum+=v[i];
    }
    cout<<abs(sum)<<endl;
    }
}

int main(){

        solve();
    
    return 0;
}