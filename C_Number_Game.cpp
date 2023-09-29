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

bool isPrime(ll n){
    for (int i=2;i*i<=n;i++){
        if (n%i==0)return false;
    }
    return true;
}

void solve(){
    ll a;
    cin>>a;
    if (a==1){
        cout<<"FastestFinger\n";
        return;
    }
    if (a==2){
        cout<<"Ashishgup\n";
        return;
    }
    if (a%2==1){
        cout<<"Ashishgup\n";
        return;
    }
    ll i=4;
    while (i<a)i*=2;
    if (i==a){
        cout<<"FastestFinger\n";
        return;
    }
    if (isPrime(a/2)){
        cout<<"FastestFinger\n";
    }
    else cout<<"Ashishgup\n";
    
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