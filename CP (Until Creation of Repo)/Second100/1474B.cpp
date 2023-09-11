#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

bool isPrime(ll n){
    if (n<=1)return false;
    for (int i=2;i<=n/2;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

ll gcd(ll a,ll b){
    ll a1=max(a,b);
    ll b1=min(a,b);
    ll temp=1;
    while (temp){
        temp = a1%b1;
        a1=b1;
        b1=temp;
    }
    return a1;
 }

void solve(){
    ll n, first, second, i;
    cin>>n;
    i = 1+n;
    while (true){
        if (isPrime(i)){
            first=i;
            break;
        }
        i++;
    }
    i=first+n;
    while(true){
        if (isPrime(i)){
            second=i;
            break;
        }
        i++;
    }
    cout<<first*second<<"\n";
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