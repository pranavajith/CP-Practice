#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;
#define ll long long

int check_super(vector < pair <ll,ll> > v, pair <ll,ll> p){
    int l=0;
    int r=0;
    int t=0;
    int b=0;
    for (int i=0;i<v.size();i++){
        if (l==0 & (v[i].first < p.first) & (v[i].second == p.second))l++;
        if (r==0 & (v[i].first > p.first) & (v[i].second == p.second))r++;
        if (t==0 & (v[i].first == p.first) & (v[i].second > p.second))t++;
        if (b==0 & (v[i].first == p.first) & (v[i].second < p.second))b++;
    }
    if (l==1 & r==1 & t==1 & b==1){
        return 1;
    }
    return 0;
}

void solve(){
    vector < pair <ll,ll> > v;
    ll n;
    cin>>n;
    for (int i=0;i<n;i++){
        pair <ll,ll> p;
        ll x,y;
        cin>>x>>y;
        p.first = x;
        p.second = y;
        v.push_back(p);
    }
    ll count=0;
    for (int i=0;i<n;i++){
        count+=check_super(v, v[i]);
    }
    cout<<count<<endl;
}

int main() 
{

        solve();
    
    return 0;
}