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
    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector < vector <ll> > pre(6, vector <ll> (n+1, 0));
    string s1[] = {"abc", "acb", "bac", "bca", "cab", "cba"};
    for (int i=0; i<6; i++){
        string temp = s1[i];
        for (int j=0; j<n; j++){
            pre[i][j+1] = pre[i][j];
            if (s[j] != temp[j%3]) pre[i][j+1]++;
        }
    }
    while (m--){
        ll l,r;
        cin>>l>>r;
        ll ans = n;
        for (int i=0; i<6; i++){
            ans = min(ans, pre[i][r] - pre[i][l-1]);
        }
        cout<<ans<<"\n";
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