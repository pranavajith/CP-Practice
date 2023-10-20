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
    return gcd(b, a%b);
}

ll lcm(ll a, ll b, ll c){
    ll w = (a*b)/(gcd(a,b));
    return ((c*w)/gcd(c,w));
}


bool isPrime(ll n){
    for (ll i = 2; i*i<=n; i++){
        if (n%i==0)return false;
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    if (n==1){
        cout<<1; return;
    }
    if (n==2){
        cout<<2; return;
    }
    if (n==3){
        cout<<6; return;
    }
    ll ans = INT_MIN;
    for (int i=max(1LL,n-5); i<=n-2; i++){
        for (int j=i+1; j<=n-1; j++){
            for (int k=j+1; k<=n; k++){
                ans = max(ans, lcm(i,j,k));
            }
        }
    }
    cout<<ans<<"\n";
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