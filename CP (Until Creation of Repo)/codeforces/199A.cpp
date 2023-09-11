#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll a=0;
    ll b=1;
    if (n!=0){
    while (a+b!=n){
        ll m = a+b;
        a=b;
        b=m;
    }
    cout<<0<<" "<<a<<" "<<b<<endl;
    }
    else{
        cout<<0<<" "<<0<<" "<<0<<endl;
    }
}

int main() 
{

        solve();
    
    return 0;
}