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
    ll n,k;
    cin>>n>>k;
    vector <ll> h(n), p(n);
    for (int i=0; i<n; i++) cin>>h[i];
    for (int i=0; i<n; i++) cin>>p[i];
    vector < pair <ll,ll> > vp(n);
    for (int i=0; i<n; i++) {
        vp[i].second = h[i]; vp[i].first = p[i];
    }
    sort(vp.begin(), vp.end());
    ll curdamage = 0, curiter = 0;
    while (curiter < n) {
        if (k<=0) {
            cout<<"NO\n";
            return;
        }
        curdamage += k;
        while (curiter < n && curdamage >= vp[curiter].second) {
            curiter++;
        }
        if (curiter == n) {
            cout<<"YES\n";
            return;
        }
        k -= vp[curiter].first;
    }
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