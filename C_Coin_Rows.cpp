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
    vector <ll> v1(n), v2(n);
    for (int i=0; i<n; i++)cin>>v1[i];
    for (int i=0; i<n; i++)cin>>v2[i];
    vector <ll> pref1(n), pref2(n);
    for (int i=0; i<n; i++){
        if (i==0) pref1[i] = v1[i];
        else pref1[i] = v1[i] + pref1[i-1];
    }
    for (int i=0; i<n; i++){
        if (i==0) pref2[i] = v2[i];
        else pref2[i] = v2[i] + pref2[i-1];
    }
    ll ans = INT_MAX, curmax;
    for (int i=0; i<n; i++){
        if (i==0) curmax = pref1[n-1] - pref1[i];
        else curmax = max(pref1[n-1] - pref1[i], pref2[i-1]);
        ans = min(curmax, ans);
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