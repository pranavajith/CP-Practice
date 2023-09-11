#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    ll sum1=0;
    int arr1[5], arr2[5];
    for (int i=0;i<5;i++){
        cin>>arr1[i];
    }
    for (int i=0;i<5;i++){
        cin>>arr2[i];
    }
    for (int i=0;i<5;i++){
        int a=150*(i+1);
        sum1+=max(150*(i+1),(500-2*arr1[i])*(i+1) - 50*arr2[i]);
    }
    ll a,b;
    cin>>a>>b;
    sum1+=a*100-b*50;
    cout<<sum1<<endl;
}

int main() 
{

        solve();
    
    return 0;
}