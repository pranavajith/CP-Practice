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
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

bool isPrime(ll n){
    for (ll i=2; i*i <= n; i++) {
        if (n % i == 0)return false;
    }
    return true;
}

void solve(){
    ll a,b;
    cin>>a>>b;
    a++;
    if (!isPrime(b)){
        cout<<"NO\n";
        return;
    }
    while (true) {
        if (a>b){
            cout<<"NO\n";
            return;
        }
        if (isPrime(a)){
            if (a==b) cout<<"YES\n";
            else cout<<"NO\n";
            return;
        }
        a++;
    }
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