#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

bool sort_vec(vector <ll> a, vector <ll> b){
    return a[0]>b[0];
}

void solve(){
    ll n,s;
    cin>>n>>s;
    vector <vector <ll> > v;
    for (int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        vector <ll> v1;
        v1.push_back(a);
        v1.push_back(b);
        v.push_back(v1);
    }
    vector <ll> v1;
    v1.push_back(0);
    v1.push_back(0);
    v.push_back(v1);
    sort(v.begin(),v.end(),sort_vec);
    // cout<<v[0][0]<<endl;
    ll time = 0;
    ll cur_floor = s;
    for (auto d:v){
        time += cur_floor-d[0];
        time = max(time, d[1]);
        cur_floor = d[0];
    }
    cout<<time<<endl;
}

int main() 
{

        solve();
    
    return 0;
}