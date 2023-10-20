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
    vector <ll> a(n), b(n);
    for (ll i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    ll ans = 0, mn = LLONG_MAX;
    for (ll i=0; i<n; i++){
        ll next = (i+1)%n;
        ll diff = min(a[next], b[i]);
        ans += a[next] - diff;
        mn = min(mn, diff);
    }
    cout<<ans+mn<<"\n";
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