#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    if (n!=k){
    ll w=0;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll sum = 0;
    for (int i=0;i<k;i++){
        sum+=v[i];
    }

    ll sum1=sum;
    // cout<<sum1<<endl;

    for (int i=k;i<n;i++){
        ll a = sum1;
        a+= v[i]-v[i-k];
        // for (int j=0;j<k;j++){
        //     a+=v[i+j];
        // }
        if (a<sum){
            // cout<<i<<" "<<a<<" "<<sum<<" "<<sum1<<endl;
            sum=a;
            w=i-k+1;
        }
        sum1=a;
    }
    cout<<w+1<<endl;
    }
    else{
        cout<<1<<endl;
    }
}

int main() 
{

        solve();
    
    return 0;
}