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

ll gcd(ll a, ll b) {
    if (a==0) return b;
    if (b==0) return a;
    return gcd(b, a%b);
}

ll f(vector <ll> &v, ll n, ll k) {
    ll gcd1 = 0;
    for (int i=0; i<n-k; i++) {
        if (i==0) gcd1 = abs(v[0] - v[k]);
        else gcd1 = gcd(gcd1, abs(v[i]-v[i+k]));
        // gcd1 = gcd(gcd1, abs(v[i]-v[i+k]));
    }
    if (gcd1 != 1) return 1;
    return 0;
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    ll i = 1, ans = 0;
    while (i<=n) {
        if (n%i==0) ans += f(v, n, i);
        i++;
    }
    cout<<ans<<"\n";
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