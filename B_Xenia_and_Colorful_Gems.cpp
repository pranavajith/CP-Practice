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

ll ans;

ll lol(ll a, ll b, ll c) {
    return (a - b) * (a - b) + (b - c) * (b - c) + (c - a) * (c - a);
}

void check(vector <ll> va, vector <ll> vb, vector <ll> vc){
    for (auto x : va) {
        auto y = lower_bound(vb.begin(), vb.end(), x);
        auto z = upper_bound(vc.begin(), vc.end(), x);
        if (y != vb.end()) {
            if (z != vc.end()) {
                ans = min(ans, lol(x, *y, *z));
            }
            if (z != vc.begin()) {
                ans = min(ans, lol(x, *y, *(z-1)));
            }
        }
        // if (y != vb.begin()) {
        //     if (z != vc.end()) {
        //         ans = min(ans, lol(x, *(y-1), *z));
        //     }
        //     if (z != vc.begin()) {
        //         ans = min(ans, lol(x, *(y-1), *(z-1)));
        //     }
        // }

    }
}
void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    vector <ll> va(a), vb(b), vc(c);
    for (int i=0; i<a; i++) cin>>va[i];
    for (int i=0; i<b; i++) cin>>vb[i];
    for (int i=0; i<c; i++) cin>>vc[i];
    // ll ans = LLONG_MAX;
    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());
    sort(vc.begin(), vc.end());
    // ans = min(ans, check(va, vb, vc));
    // ans = min(ans, check(vc, va, vb));
    // ans = min(ans, check(vb, va, vc));
    // ans = min(ans, check(vc, vb, va));
    // ans = min(ans, check(va, vb, vc));
    // ans = min(ans, check(vc, vb, va));
    ans = LLONG_MAX;
    check(va, vb, vc);
    check(vc, va, vb);
    check(vb, va, vc);
    check(vb, vc, va);
    check(va, vc, vb);
    check(vc, vb, va);
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