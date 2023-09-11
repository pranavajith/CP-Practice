#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll x,y,n;
    cin>>x>>y>>n;
    n = ((n-1)%6) + 1;
    ll a;
    if (n==1)a=x;
    else if (n==2)a=y;
    else if (n==3)a=y-x;
    else if (n==4)a=-1*x;
    else if (n==5)a=-1*y;
    else a=x-y;
    // else cout<<
    
    if (a<0){
        // cout<<fixed<<1000000007+a<<"\n";
        a=-1*a;
        // cout<<a<<"\n";
        if (a==1000000007)cout<<0<<"\n";
        else cout<<1000000007-(a%1000000007)<<"\n";
    }
    else cout<<a%1000000007<<"\n";
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