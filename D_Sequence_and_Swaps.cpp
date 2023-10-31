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
    ll n,x, ans = 0;
    cin>>n>>x;
    vector <ll> v(n);
    for (int i=0; i<n; i++)cin>>v[i];
    ll iter = 0;
    vector <ll> check(n+1, 0);
    check[n] = 1; check[n-1] = 1;
    for (int i=n-2; i>=0; i--){
        if (v[i] <= v[i+1]){
            check[i] = check[i+1];
        }
    }
    while (iter<n){
        int end = iter;
        while (end < n && v[end] <= x){
            end++;
        }
        for (int i=iter; i<end; i++){
            if (i==0)continue;
            if (v[i-1] > v[i]){
                cout<<-1<<"\n";
                return;
            }
        }
        if (check[end]){
            break;
        }
        ans++;
        swap (v[end], x);
        iter = end;
        // if (v[iter] > x){
        //     swap(v[iter], x);
        //     iter++;
        //     ans++;
        // }
        // else{
        //     if (iter!=0 && v[iter] < v[iter-1]){
        //         cout<<-1<<"\n";
        //         return;
        //     }
        //     iter++;
        // }
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