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

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    vector <ll> bitcheck(21, 0);
    for (auto d:v){
        for (int i=0; i<=20; i++) {
            if ((d>>i) & 1) bitcheck[i]++;
        }
    }
    // for (auto d:bitcheck) cout<<d<<" "; cout<<"\n";
    ll ans = 0;
    for (int i=0; i<n; i++) {
        ll ind = 0;
        for (int i=0; i<=20; i++) {
            if (bitcheck[i]){
                bitcheck[i]--;
                ind |= (1LL<<i);
            }
        }
        ans += ind * ind;
    }
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