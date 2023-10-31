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

ll fact(ll n){
    ll ans = 1;
    for (int i=2; i<=n; i++){
        ans = (ans*i)%mod;
    }
    return ans;
}

ll powmod(ll a, ll b){
    a %= mod;
    if (a == 0) return 0;
    ll product = 1;
    while(b > 0){
        if (b%2){
            product *= a;
            product %= mod;
            --b;
        }
        a *= a;
        a %= mod;
        b >>= 1;
    }
    return product;
}

ll inv(ll a){
    return powmod(a, mod-2);
}

ll nCk(ll n, ll k){
    return ((fact(n) * inv(fact(k)) % mod) * inv(fact(n-k))) % mod;
}

ll accurateFloor(ll a, ll b) {
	ll val = a / b;
	while (val * b > a)
		val--;
	return val;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    ll a;
    vector <ll> v;
    for (int i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    vector <ll> prevSum(n+1, 0);
    for (int i=0; i<n; i++){
        prevSum[i+1] = prevSum[i] + v[i];
    }
    ll ans = LLONG_MAX;
    for (int y=0; y<n; y++){
        ll x = v[0] - accurateFloor(k - prevSum[n - y] + v[0], y + 1);
        ans = min(ans, y + max(0LL,x));
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