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

ll get(ll x){
    return x*(x-1)/2;
}

void solve(){
    ll n,m, sol=0;
    cin>>n>>m;
    cout<<((n/m)*(n/m-1)/2) * (m - n%m) +((n/m)*(n/m+1)/2) * (n%m)<<" "<<((n-m+1)*(n-m)/2)<<"\n";
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