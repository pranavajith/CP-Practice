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
    for (int i=0;i <n ; i++) cin>>v[i];
    bool check = true;
    ll sum1 = accumulate(v.begin(), v.end(), 0LL);
    if (sum1 % 2) check = false;
    else {
        bitset <200001> b;
        b[0] = 1;
        for (int i:v) b |= (b<<i);
        if (!b[sum1/2]) check = false;
    }
    if (check) {
        ll ans = 0, bitcheck = 25;
        for (int i=0; i<n; i++) {
            ll cnt = 0;
            while (v[i]%2==0) {
                v[i]/=2;
                cnt++;
            }
            if (bitcheck > cnt){
                bitcheck = cnt, ans = i;
            }
        }
        cout<<1<<"\n"<<ans+1<<"\n";
    }
    else cout<<0<<"\n";
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