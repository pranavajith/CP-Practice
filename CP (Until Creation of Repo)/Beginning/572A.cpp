#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    ll na,nb,k,m;
    cin>>na>>nb>>k>>m;
    ll a[na],b[nb];
    for (int i=0;i<na;i++){
        cin>>a[i];
    }
    for (int i=0;i<nb;i++){
        cin>>b[i];
    }
    if (a[k-1]<b[nb-m]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main() 
{

        solve();
    
    return 0;
}