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
    string s, sol;
    cin>>s;
    ll a = 0; vector <ll> check(26, 0);
    for (int i=0; i<s.size(); i++){
        if (check[s[i] - 'a']){
            if (a==0){
                if (sol[1] == s[i]) a++;
                else {
                    cout<<"NO\n";
                    return;
                }
            }
            else if (a==sol.size()-1){
                if (sol[sol.size()-2] == s[i]) a--;
                else{
                    cout<<"NO\n";
                    return;
                }
            }
            else if (sol[a+1] == s[i]){
                a++;
            }
            else if (sol[a-1] == s[i]){
                a--;
            }
            else{
                cout<<"NO\n";
                return;
            }
        }
        else{
            check[s[i]-'a'] = 1;
            if (a==0){
                sol = s[i] + sol;
            }
            else if (a==sol.size()-1){
                sol += s[i];
                a++;
            }
            else {
                cout<<"NO\n";
                return;
            }
        }
    }
    for (int i=0; i<26; i++){
        if (!check[i]){
            sol.push_back(i+'a');
        }
    }
    cout<<"YES\n"<<sol<<"\n";
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