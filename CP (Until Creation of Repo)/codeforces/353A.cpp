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
    ll a=0,b=0, count1=0;
    for (int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        a+=x;
        b+=y;
        if ((x%2==0 && y%2==1) || (x%2==1 && y%2==0)){
            count1++;
        }
    }

    if ((a%2==1 && b%2==1 && count1)){
        cout<<1<<endl;
    }
    else if ((a%2==0 && b%2==0)){
        cout<<0<<endl;
    }
    else{
        cout<<-1<<endl;
    }

    

}

int main() 
{

        solve();
    
    return 0;
}