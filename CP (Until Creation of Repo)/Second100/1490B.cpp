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
    ll n, c0=0,c1=0,c2=0;
    cin>>n;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a%3==0)c0++;
        if (a%3==1)c1++;
        if (a%3==2)c2++;
    }
    if (c0==c1 && c1==c2)cout<<0<<"\n";
    else{
        // cout<<c0<<" "<<c1<<" "<<c2<<"\n";
        ll a = (c0+c1+c2)/3, count1=0;
        // cout<<(abs(c0-a)+abs(c1-a)+abs(c2-a))/2<<"\n";
        while (c0!=a || c1!=a || c2!=a){
            // cout<<count1<<"\n";
            if (c0>a){
                c0--;c1++;count1++;
            }
            else if (c1>a){
                c1--;c2++;count1++;
            }
            else if (c2>0){
                c2--;c0++;count1++;
            }
        }
        cout<<count1<<"\n";
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