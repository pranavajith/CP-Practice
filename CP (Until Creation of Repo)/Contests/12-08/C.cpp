#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <algorithm>  
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    int arr[n];
    // vector <ll> v1;
    for (int i=0;i<n;i++){
        // v1.push_back(i+1);
        arr[i]=i+1;
    }
    ll s=0;
    do{
        vector <ll> v;
        cout<<"A: "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<endl;
        for (int i=0;i<n;i++){
            v.push_back((i+1)*arr[i]);
        }
        sort(v.begin(),v.end());
        ll sum1=0;
        for (int i=0;i<n-1;i++){
            sum1+=v[i];
        }
        cout<<sum1<<" "<<s<<endl;
        if (sum1>s){
            s=sum1;
        }
    } while(prev_permutation(arr,arr+n));
    cout<<s<<endl;
}

int main() 
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}