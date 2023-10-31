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
    ll k;
    cin>>k;
    string s;
    cin>>s;
    ll n = s.size();
    map <ll,ll> m;
    vector <ll> sum1(n); ll count1 = 0;
    for (int i=0; i<n; i++){
        if (s[i]=='1')count1++;
        sum1[i] = count1;
        m[count1]++;
    }
    // if (m[0] == 0) m[0]++;
    m[0]++;
    // for (auto d:sum1)cout<<d<<" ";
    ll ans = 0;
    if (k==0){
        map <ll,ll> m1;
        for (int i=0; i<n; i++){
            m1[sum1[i]]++;
            if (sum1[i]==0) ans+=m1[sum1[i]];
            else ans+=m1[sum1[i]]-1;
        }
        cout<<ans<<"\n";
        return;
    }
    for (int i=0; i<n; i++) ans+=m[sum1[i] - k];
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