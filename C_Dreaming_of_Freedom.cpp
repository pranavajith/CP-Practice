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

ll isPrime(ll n){
    for (int i=2;i*i <=n; i++){
        if (n%i==0)return i;
    }
    return 0;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    if (n==1)cout<<"YES\n";
    else if (k>=n)cout<<"NO\n";
    else {
        ll w = isPrime(n);
        if (w==0)cout<<"YES\n";
        else{
            if (k>=w)cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}