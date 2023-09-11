#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){   
    ll a,b;
    cin>>a>>b;
    if (a==1){
        cout<<b<<endl;
    }
    else if (b==1){
        cout<<1<<endl;
    }
    else if (a==b){
        cout<<1<<endl;
    }
    else if (a>b){
        if (a%b==0)cout<<1<<endl;
        else{
        ll n=a/b+1;
        n=n*b;
        cout<<n/a+1<<endl;}
        }
    else{
        if (b%a==0)cout<<b/a<<endl;
        else cout<<b/a+1<<endl;
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