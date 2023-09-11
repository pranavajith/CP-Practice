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
    ll ind1=0, ind2=0;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a==1){
            ind1=i+1;
        }
        if (a==n){
            ind2=i+1;
        }
    }
    // cout<<ind1<<" "<<max(n-ind1+1,ind1)<<endl;
    // cout<<ind2<<" "<<max(n-ind2+1,ind2)<<endl;
    // cout<<ind1<<" "<<min(n-ind1+1,ind1)<<endl;
    // cout<<ind2<<" "<<min(n-ind2+1,ind2)<<endl;
    if (ind2==n || ind1==1 || ind2==1 || ind1==n){
        cout<<n-1<<endl;
    }
    else if (min(n-ind1+1,ind1)<min(n-ind2+1,ind2)){
        cout<<max(n-ind1+1,ind1)-1<<endl;
    }
    else{
        cout<<max(n-ind2+1,ind2)-1<<endl;
    }
}

int main() 
{

        solve();
    
    return 0;
}