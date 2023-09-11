#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll count0=0;
    ll count5=0;
    for (int i=0;i<n;i++){
        ll m;
        cin>>m;
        if (m==0){
            count0++;
        }
        else{
            count5++;
        }
    }
    count0--;
    if (count5>=9 && (count0+1)){
        ll times = count5 - count5%9;
        for (int i=0;i<times;i++){
            cout<<5;
        }
        while (count0--){
            cout<<0;
        }
        cout<<0<<endl;
    }
    else{
        if (count0+1>0){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}

int main() 
{

        solve();
    
    return 0;
}