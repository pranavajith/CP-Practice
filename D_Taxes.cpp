#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

bool isPrime(ll n){
    for (ll i = 2; i*i <=n; i++){
        if (n%i==0)return false;
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    if (isPrime(n))cout<<1<<"\n";
    else if (n%2==0 || isPrime(n-2))cout<<2<<"\n";
    else cout<<3<<"\n";
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