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

// ll powmod(ll a, ll b){
//     a %= mod;
//     if (a == 0) return 0;
//     ll product = 1;
//     while(b > 0){
//         if (b%2){
//             product *= a;
//             product %= mod;
//             --b;
//         }
//         a *= a;
//         a %= mod;
//         b >>= 1;
//     }
//     return product;
// }

string d2b ( ll a ) {
    string s;
    ll num = floor(log2(a) + 1);
    for (int i=num-1; i>=0; i--) {
        s += ((a>>i) & 1) + '0';
    }
    return s;
}

// ll binexp(ll n,ll k)
// {
//     if (k==0)
//     {
//         return 1;
//     }
//     if (k==1)
//     {
//         return n;
//     }
//     ll temp=binexp(n,k/2);
//     ll result=(temp*temp);
//     if (k%2==1)
//     {
//         result = (result * n);
//     }
//     return result;
// }

ll b2d (string s){
    ll ans = 0;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == '1') {
            ll temp = 1, lol = s.size()-1-i;
            while (lol--) temp*=2;
            ans += temp;
        }
    }
    return ans;
}
 
// ll b2d(string s)
// {
//     ll a=1;
//     ll sum=0;
//     for (ll i=s.size()-1;i>=0;i--)
//     {
//         if (s[i]=='1')
//         {
//             sum+=(powmod(2,(s.size()-i-1)));
//         }
//     }
//     return sum;
// }

void solve(){
    ll l,r;
    cin>>l>>r;
    string lbin = d2b(l), rbin = d2b(r);
    while (rbin.size() > lbin.size()) lbin = '0' + lbin;
    for (int i=0; i<rbin.size(); i++) {
        if (lbin[i] == rbin[i]) {
            bool check = false;
            if (rbin[i] == '1') {
                rbin[i] = '0';
                check = true;
                if (b2d(rbin) < l) {
                    rbin[i] = '1';
                    check = false;
                }
            }
            if (!check) {
                if (lbin[i] == '0') {
                    lbin[i] = '1';
                    if (b2d(lbin) > r) lbin[i] = '0';
                }
            }
        }
    }

    cout<<(b2d(rbin) ^ b2d(lbin))<<"\n";
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