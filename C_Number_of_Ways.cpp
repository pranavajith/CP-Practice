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
    if (count(v.begin(), v.end(), v[0]) == n) {
        if (v[0] == 0) cout<<(n-2)*(n-1)/2<<"\n";
        else if (n%3) cout<<0<<"\n";
        else cout<<1<<"\n";
        return;
    }
    ll s = accumulate(v.begin(), v.end(), 0LL);
    if (s % 3){
        cout<<0<<"\n";
        return;
    }
    ll ans = 0;
    vector <ll> prefcount(n,0);
    ll pref = 0, prefsum = 0;
    for (int i=0; i<n; i++){
        prefsum += v[i];
        if (prefsum == s/3) pref++;
        prefcount[i] = pref;
    }
    // for (auto d:prefcount)cout<<d<<" "; cout<<"\n";
    ll suff = 0, suffsum = 0;
    for (int i=n-1; i>=2; i--){
        suffsum += v[i];
        if (suffsum == s/3) {
            ans+=prefcount[i-2];
        }
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