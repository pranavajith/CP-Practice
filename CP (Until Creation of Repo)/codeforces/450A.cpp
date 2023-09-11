#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;
#define ll long long

void solve(){
    pair <ll,ll> p1;
    p1.first = 0;
    p1.second = 0;
    ll n,m;
    cin>>n>>m;
    vector <pair <ll,ll> > v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        pair <ll,ll> p;
        p.first = a;
        p.second = i+1;
        v.push_back(p);
    }
    v.push_back(p1);
    ll i = 0;
    ll a = 0;
    while (v[i].first!=0){
        a = v[i].second;
        if (v[i].first>m){
            pair <ll,ll> p;
            p.first = v[i].first-m;
            p.second = v[i].second;
            v[v.size()-1]=(p);
            v.push_back(p1);
        }
        i++;
    }
    cout<<a<<endl;
}

int main() 
{

        solve();
    
    return 0;
}