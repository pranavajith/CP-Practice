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
    for (int i=2; i*i <=n; i++){
        if (n%i==0)return false;
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    // ll count1 = 0;
    vector <ll> v;
    for (int i=2; i<=n; i++){
        if (isPrime(i)){
            ll a1 = i;
            while (a1<=n){
                v.push_back(a1);
                a1*=i;
            }
        }
    }
    cout<<v.size()<<"\n";
    for (auto d:v)cout<<d<<" ";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}