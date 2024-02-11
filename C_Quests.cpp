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
    vector <ll> first(n), sub(n);
    for (int i=0; i<n; i++) cin>>first[i];
    for (int i=0; i<n; i++) cin>>sub[i];

    vector <ll> pref(n), maxcheck(n);
    pref[0] = first[0];
    for (int i=1; i<n; i++) pref[i] = pref[i-1] + first[i];
    maxcheck[0] = sub[0];
    for (int i=1; i<n; i++){
        maxcheck[i] = max(maxcheck[i-1], sub[i]);
    }
    ll ans = 0;
    for (int i=0; i<n; i++) {
        ll k1 = k, ans1 = 0;
        if (k1 >= i+1)
       { k1 -= i+1;
        ans1 += pref[i];
        ans1 += k1 * (maxcheck[i]);
        ans = max(ans, ans1);
        // cout<<ans1<<" ";
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