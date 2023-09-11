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
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    
    if ((v[0]!=v[v.size()-1])){
        cout<<count(v.begin(),v.end(),v[0])<<" "<<v.size()-count(v.begin(),v.end(),v[0])<<endl;
        for (int i=0;i<count(v.begin(),v.end(),v[0]);i++){
            cout<<v[0]<<" ";
        }
        cout<<endl;
        for (int i=count(v.begin(),v.end(),v[0]);i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
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