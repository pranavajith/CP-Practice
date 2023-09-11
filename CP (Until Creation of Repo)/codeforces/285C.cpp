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
    ll arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll sum1=0;
    for (int i=0;i<n;i++){
        sum1+=abs(i+1-arr[i]);
        // cout<<i+1-arr[i]<<endl;
    }
    cout<<sum1<<endl;
}

int main() 
{

        solve();
    
    return 0;
}