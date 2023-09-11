#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <numeric>
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

ll gcd(ll a, ll b){
    if (b==0)return a;
    return gcd(b,a%b);
}

void solve(){
    ll n, gcd1;
    cin>>n;
    vector <ll> v(n);
    cin>>gcd1;
    for (int i=1;i<n;i++){
        ll a;
        cin>>a;
        gcd1 = gcd(gcd1,a);
    }
    ll sol=0;
    for (int i=2;i<=sqrt(gcd1);i++){
        if (gcd1%i==0){
            sol++;
            if (i!=gcd1/i)sol++;
        }
    }
    if (gcd1>1)sol+=2;
    else sol=1;
    cout<<sol<<"\n";
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