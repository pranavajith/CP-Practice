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

ll gcd(ll a, ll b){
    if (b==0)return a;
    return gcd(b,a%b);
}

ll lcm (ll a, ll b){
    return (a*b)/(gcd(a,b));
}

void solve(){
    ll k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    ll sol = d/k + d/l + d/m + d/n - (d/lcm(k,l) + d/lcm(k,m) + d/lcm(k,n) + d/lcm(m,l) + d/lcm(n,l) + d/lcm(m,n));
    sol+= (d/lcm(lcm(k,l),m) + d/lcm(lcm(k,l),n) + d/lcm(lcm(k,m),n) + d/lcm(lcm(m,l),n)) - d/lcm(lcm(k,l),lcm(m,n));
    cout<<sol<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}