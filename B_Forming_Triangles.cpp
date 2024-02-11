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

ll nc3(ll n) {
    if (n>=3)
    return n*(n-1)*(n-2)/6;
    return 0;
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    map <ll,ll> m;
    ll ans = 0;
    for (int i=0; i<n; i++) {
        ll a;
        cin>>a;
        m[a]++;
    }
    ll untilnow = 0;
    for (int i=0; i<=n; i++) {
        if (m[i] > 1) {
            // cout<<"ok"
            ans += nc3(m[i]) + (m[i]*(m[i]-1)/2) * untilnow;
        }
        untilnow += m[i];
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