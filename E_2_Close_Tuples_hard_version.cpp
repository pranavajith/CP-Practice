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


void solve(){
    ll n,m,k,a;
    cin>>n>>m>>k;
    set <ll> s;

    map <ll,ll> m1;
    for (int i=0; i<n; i++){
        cin>>a;
        s.insert(a);
        m1[a]++;
    }
    vector <ll> v(s.begin(), s.end());
    // for (auto d:v){
    //     cout<<d<<" : "<<m1[d]<<"\n";
    // }
    ll  l = 0, r = 0, cursiz = 0;
    while (r<v.size() && ((v[r] - v[l]) <= k)) {
        cursiz += m1[v[r]]; 
        r++;
    }
    if (r==v.size() || v.size()==1){
        cout<<nCk(n,m)<<"\n";
        return;
    }
    // r--; 
    // cout<<cursiz<<"\n\n";
    // cout<<l<<" "<<r<<"\n";
    ll ans = 0;
    while (l<v.size()){
        // cout<<cursiz<<" !!\n";
        // if (cursiz >= m ) ans = (ans % mod + (m1[v[l]] * nCk (cursiz-1, m-1)) % mod) % mod;
        if (cursiz >= m) {
            for (int j=1; j<=m1[v[l]]; j++) {
                if ((cursiz - m1[v[l]] >= m-j) && (m1[v[l]] >= j)) ans = (ans + (nCk(m1[v[l]], j) % mod) * (nCk (cursiz - m1[v[l]], m - j) % mod)) % mod;
            }
        }
        // cout<<ans<<" ";
        cursiz -= m1[v[l]]; l++;
        // cout<<cursiz<<" !!\n";
        while (r<v.size() && v[r] - v[l] <= k){
            cursiz += m1[v[r]];
            r++;
        }
        // cout<<cursiz<<"\n";
        // cout<<l<<" "<<r<<"\n";
    }
    // cout<<cursiz<<"\n";
    // ans = (ans + nCk (cursiz, m)) % mod;
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