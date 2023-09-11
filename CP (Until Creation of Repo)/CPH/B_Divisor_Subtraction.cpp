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

ll isPrime(ll a){
    for (int i=3;i<=sqrt(a);i++){
        // cout<<i<<"\n";
        if (a%i==0)return i;
    }
    return a;
}

void solve(){
    long long int n;
    cin>>n;
    if (n%2==0){
        cout<<n/2<<"\n";
    }
    else{   
        n-=isPrime(n);
        cout<<1+n/2<<"\n";
    }
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