#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    ll a=0,b=0;
    for (int i=0;i<n;i++){
        if (i<(n+1)/2){
            a+=v[n-i-1];
        }
        else{
            b+=v[n-i-1];
        }
    }
    // cout<<a<<" "<<b<<"\n";
    ll w = pow(a,2)+pow(b,2);
    cout<<w<<"\n";
}

int main() 
{
    // lTxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}