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
ll mod = 998244353;
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
    if (k>n) return 0;
    return ((fact(n) * inv(fact(k)) % mod) * inv(fact(n-k))) % mod;
}


void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    vector <ll> even;
    vector <ll> oddcount(n); ll odd = 0;
    for (int i=0; i<n; i++) {
        cin>>v[i];
        if (v[i]%2==0) even.push_back(i);
        else odd++;
        oddcount[i] = odd;
    }
    if (even.size()==0){
        cout<<0<<"\n";
        return;
    }
    
    ll ans = 0, counteven = n - odd;
    for (int i=3; i<=counteven; i++){
        ans = (ans + nCk(counteven, i)) % mod;
    }
    if (odd == 0) {
        cout<<ans<<"\n";
        return;
    }
    vector <ll> leftoddcheck1(n), rightoddcheck1(n), leftoddcheck2(n), rightoddcheck2(n);
    for (int i=0; i<counteven; i++){
        leftoddcheck1[even[i]] = nCk(oddcount[even[i]], 1);
        leftoddcheck2[even[i]] = nCk(oddcount[even[i]], 2);
        rightoddcheck1[even[i]] = nCk(odd - oddcount[even[i]], 1);
        rightoddcheck2[even[i]] = nCk(odd - oddcount[even[i]], 2);
    }

    for (int i=0; i<counteven; i++){
        ans = (ans + rightoddcheck2[even[i]]) % mod;
        ans = (ans + (leftoddcheck1[even[i]]*((rightoddcheck1[even[i]] + rightoddcheck2[even[i]]) % mod)) % mod) % mod;
        ans = (ans + (leftoddcheck2[even[i]]*((1 + rightoddcheck1[even[i]] + rightoddcheck2[even[i]]) % mod)) % mod) % mod;
        for (int j = i+1; j<counteven; j++){
            if (oddcount[even[j]] )
        }
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