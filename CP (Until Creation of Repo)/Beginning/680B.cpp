#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    ll n,a;
    cin>>n>>a;
    vector <ll> v;
    for (int i=0;i<n;i++){
        int c;
        cin>>c;
        if (c==1){
            v.push_back(i+1);
        }
    }
    ll count1=0;
    for (auto d:v){
        // cout<<d<<" ";
        // cout<<d<<" "<<count(v.begin(),v.end(),abs(n-d))<<endl;
        if ((d==a) || count(v.begin(),v.end(),(2*a-d)) || abs(d-a)>min(a-1,n-a)){
            // cout<<d<<endl;
            count1++;
        }
    }
    cout<<count1<<endl;
}

int main() 
{

        solve();
    
    return 0;
}