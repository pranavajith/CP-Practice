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
    ll count100=0, count200 = 0;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a==100)count100++;
        else count200++;
    }
    if ((count100==0 && count200==1) || (count200==0 && count100==1)){
        cout<<"NO"<<endl;
    }
    else if ((count100==0 && count200%2==1) || (count100%2==1 && count200==0)){
        cout<<"NO"<<endl;
    }
    else if (abs((count100-2*count200))%2==0){
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