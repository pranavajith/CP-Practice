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
    ll n;
    cin>>n;
    set<ll> s;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            s.insert(i);
            n/=i;
            break;
        }
    }
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0 && !s.count(i)){
            s.insert(i);
            n/=i;
            break;
        }
    }
    if (s.size()<2 || s.count(n) || n==1)cout<<"NO\n";
    else{
        cout<<"YES\n";
        s.insert(n);
        for (auto d:s)cout<<d<<" ";
        cout<<"\n";
    }
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}