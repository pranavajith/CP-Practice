#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    vector <ll> v;
    for (ll i=0;i<n;i++){
        ll w;
        cin>>w;
        v.push_back(w+m);
    }
    sort(v.begin(),v.end());
    ll c=0;
    for (ll d: v){
        if (d>5){
            break;
        }
        c++;
    }
    cout<<c/3<<endl;
}

int main() 
{

        solve();
    
    return 0;
}