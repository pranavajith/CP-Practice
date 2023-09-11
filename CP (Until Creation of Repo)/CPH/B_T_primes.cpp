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

vector <ll> v(1000010,0);

void pre(){
    for (ll i=2;i<1000010;i++){
        for (int j=i*2;j<1000010;j+=i){
            v[j]=1;
        }
    }
}

void solve(){
    ll n;
    cin>>n;
    if (n==1)cout<<"NO\n";
    else{
    ll root = sqrt(n);
    if (root*root !=n)cout<<"NO\n";
    else{
        if (v[root]==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    }
}

int main() 
{
    // TxtIO;
    ll t;
    pre();
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}