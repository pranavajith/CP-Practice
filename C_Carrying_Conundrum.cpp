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
    string s, s1, s2;
    cin>>s;
    for (int i=0; i<s.size(); i++){
        if (i%2==0)s1+=(s[i]);
        else s2+=(s[i]);
    }
    if (s2.empty()) {
        cout << stoi(s1) - 1<<"\n"; return;
    }
    cout << (stoi(s1) + 1) * (stoi(s2) + 1) - 2 <<"\n";;
}

// void solve() {
//     string s, s1, s2, s3;
//     cin >> s;
//     for (int i = 0; i < s.size(); i++) {
//         if (i % 2 == 0) {s1 += s[i];}
//         else if (i % 2 == 1) {s2 += s[i];}
//     }
//     if (s2.empty()) {
//         cout << stoi(s1) - 1<<"\n"; return;
//     }
//     cout << (stoi(s1) + 1) * (stoi(s2) + 1) - 2 <<"\n";;
// }

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}