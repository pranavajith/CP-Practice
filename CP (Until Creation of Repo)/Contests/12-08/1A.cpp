#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll sum1=0, init = 0;
    if (n & 1){
        for (int i=0;i<n;i++){
            if (v[i]%2==1)sum1+=v[i];
            else sum1+=v[i]-1;
        }
        cout<<sum1<<"\n";
    }
    else{
        for (int i=1;i<n;i++){
            if (v[i]%2==1)sum1+=v[i];
            else sum1+=v[i]-1;
        }
        cout<<sum1<<"\n";
    }
    
}

int main() 
{
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}