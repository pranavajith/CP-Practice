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

// vector <ll> check(1e7+1, 0);
set <ll> s;

void solve(){
    ll n;
    cin>>n;
    // if (s.find())
    if (n<=3) {
        cout<<"NO\n";
        return;
    }
    if (s.find(n) != s.end()) {
        cout<<"YES\n";
        return;
    }
    ll target = 4*(n-1) + 1;
    ll sqtarget = sqrt(target), real = -1;
    for (ll i=max(0LL, sqtarget - 3); i <= sqtarget + 1; i++) {
        if (i*i == target) {
            real = i; break;
        }
    }
    if (real == -1 || ((real - 1) % 2) || (real-1)/2 <= 1) cout<<"NO\n";
    else cout<<"YES\n"; 
}

int main() 
{
    for (ll i = 2; i <= 1e6; i++) {
        // cout<<i<<" ";
        ll cur = 1 + i + i*i, incr = i*i*i;
        for (int j=0; j<=60; j++) {
            cur += incr;
            s.insert(cur);
            // cur += incr;
            if (incr > ((ll)1e18 / i)) break;
            incr *= i;
            // if (cur > 1e18) break;
        }
    }
    // cout<<"ok";
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}