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
    map <ll,ll> m;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        m[a]++;
    }
    ll a=0,count1=0;
    for (auto it=m.begin();it!=m.end();it++){
        if (it->second > count1){
            count1 = it->second;
            a = it->first;
        }
    }
    if (count1 <= (n+1)/2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main() 
{
 
        solve();
    
    return 0;
}