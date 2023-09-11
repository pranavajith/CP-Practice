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
    ll n, even=0,odd=0;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a%2==0)even++;
        else odd++;
        v.push_back(a);
    }
    // cout<<even<<" "<<odd<<"\n";
    // ll count1=0;
    if (even%2!=odd%2){
        cout<<"NO\n";
    }
    else{
        if (even%2==0 && odd%2==0){
            cout<<"YES\n";
        }
        else{
            sort(v.begin(),v.end());
        for (int i=0;i<n-1;i++){
            if (v[i+1]==v[i]+1){
                cout<<"YES\n";
                return;
            }
        }
        cout<<"NO\n";
    }}
    // sort(v.begin(),v.end());
    // for (int i=0;i<n-1;i++){
    //     if (v[i+1]==v[i]+1){
    //         count1+=2;
    //         v[i]=0;
    //         v[i+1]=0;
    //     }
    // }
    // // cout<<count1<<"\n";
    // ll c_odd=0, c_even = 0;
    // for (int i=0;i<n;i++){
    //     if (v[i]!=0){
    //         if (v[i]%2==0)c_even++;
    //         else c_odd++;
    //     }
    // }
    // if (c_even%2==0 && c_odd%2==0){
    //     cout<<"YES"<<"\n";
    // }
    // else{
    //     cout<<"NO"<<"\n";
    // }
}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}