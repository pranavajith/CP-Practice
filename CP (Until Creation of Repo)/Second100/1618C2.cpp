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

ll gcd(ll a, ll b){
    if (b==0)return a;
    return gcd(b, a%b);
}

void solve(){
    ll n, gcda, gcdb;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (i==0){
            gcda = a;
        }
        else if (i==1){
            gcdb = a;
        }
        else if (i%2==0){
            gcda = gcd(gcda,a);
        }
        else{
            gcdb = gcd(gcdb,a);
        }
        v.push_back(a);
    }
    // ll a = v[0], b= v[1], gcda = a, gcdb = b;
    // for (int i=2;i<n    ;i+=2){
    //     gcda = gcd(gcda,v[i]);
    // }
    // for (int i=3;i<n;i+=2){
    //     gcdb = gcd(gcdb,v[i]);
    // }
    // cout<<gcda<<" "<<gcdb<<"\n";
    // if (gcda==gcdb){
    //     cout<<0<<"\n";
    // }
    // else{
        // cout<<max(gcda,gcdb)<<"\n";
        bool flag1=true;
        bool flag2=true;
        for (int i=0;i<n;i+=2){
            if (v[i]%gcdb==0){
                flag1 = false;
                break;
            }
        }
        for (int i=1;i<n;i+=2){
            if (v[i]%gcda==0){
                flag2 = false;
                break;
            }
        }
        if (flag1){
            cout<<gcdb<<"\n";
        }
        else if (flag2){
            cout<<gcda<<"\n";
        }
        else{
            cout<<0<<"\n";
        }
    
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