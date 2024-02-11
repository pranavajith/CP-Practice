
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
    vector <ll> pre(n), suf(n);
    for (int i=0; i<n; i++) pre[i] = v[i] + n-i-1;
    for (int i=n-1; i>=0; i--) suf[i] = v[i] + i;
    for (int i=1; i<n; i++) pre[i] = max(pre[i], pre[i-1]);
    for (int i=n-2; i>=0; i--) suf[i] = max(suf[i], suf[i+1]);
    ll ans = LLONG_MAX;
    for (int i=0; i<n; i++){
        if (i==0 && i==n-1) ans = min(ans, v[i]);
        else if (i==0) ans = min(ans, max(v[i], suf[i+1]));
        else if (i==n-1) ans = min(ans, max(v[i], pre[i-1]));
        else ans = min(ans, max(v[i], max(pre[i-1], suf[i+1])));
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