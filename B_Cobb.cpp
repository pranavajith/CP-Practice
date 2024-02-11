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

void solve(){
    ll n,k;
    cin>>n>>k;
    vector <ll> v(n);
    ll x = -1 * 1e18;
    for (ll i=0; i<n; i++) cin>>v[i];
    for (ll i=0; i<n; i++){
        for (ll j=n-1; j>=max(n-2*k-1, 0LL); j--) {
            if (i==j) continue;
            x = max (x, (i+1)*(j+1) - k * (v[i] | v[j]));
        }
    }
    cout<<x<<"\n";
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