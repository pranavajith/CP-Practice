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
    v.push_back(1);
    for (ll i = 0;i<m;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    // v.push_back(v[0]);
    // for (auto d:v){
    //     cout<<d<<" ";
    // }
    // cout<<endl;
    ll time = 0;
    for (int i=0;i<v.size()-1;i++){
        if (v[i]<=v[i+1]){
            time += v[i+1]-v[i];
            // cout<<time<<" ";
        }
        else{
            time += n + v[i+1] - v[i];
            // cout<<time<<" ";
        }
    }
    cout<<time<<endl;

}

int main() 
{

        solve();
    
    return 0;
}