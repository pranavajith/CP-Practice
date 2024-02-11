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

ll gcd(ll a, ll b) {
    if (b==0) return a;
    return gcd(b, a%b);
}
void solve(){
    ll n,a;
    cin>>n;
    vector <ll> v(1001, -1);
    for (int i=0; i<n; i++) {
        cin>>a;
        v[a] = i;
    }
    // cout<< v[1] <<"\n";
    ll ans = -1;
    for (ll i=1; i<1001; i++) {
        if (v[i] != -1) {
            for (ll j=1; j<1001; j++) {
                if (v[j] != -1 && gcd(i,j) == 1) {
                    ans = max(ans, v[i]+v[j]+2);
                    // cout<<i<<" "<<j<<"\n";
                }
            }
        }
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