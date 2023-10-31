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
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

int mod = 1e9 + 7;

int fast_pow(int a, int p) {
  int res = 1;
  while (p) {
    if (p % 2 == 0) {
      a = a * 1ll * a % mod;
      p /= 2;
    } else {
      res = res * 1ll * a % mod;
      p--;
    }
  }
  return res;
}

ll inv (ll n){
    return fast_pow(n, mod-2);
}

int fact(int n) {
  int res = 1;
  for (int i = 1; i <= n; i++) {
    res = res * 1ll * i % mod;
  }
  return res;
}

int C(int n, int k) {
  return fact(n) * 1ll * inv(fact(k)) % mod * 1ll * inv(fact(n - k)) % mod;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    set <ll> s;
    map <ll,ll> m;
    for (int i=0; i<n; i++){
        ll a;
        cin>>a;
        m[a]++;
        s.insert(a);
    }
    vector <ll> v(s.begin(), s.end());
    reverse(v.begin(), v.end());
    for (int i=0; i<v.size(); i++){
        if (k>m[v[i]]){
            k-=m[v[i]];
        }
        else{
            cout<<C(m[v[i]], k)<<"\n";
            return;
        }
    }
    cout<<1<<"\n";
}

int main() 
{
    // for (int i=1; i<=1005; i++){
    //     fact[i] = (fact[i-1]*i)%MOD;
    // }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}