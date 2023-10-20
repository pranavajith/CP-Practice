#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,k,z;
    cin>>n>>k>>z;
    vector <ll> v(n);
    ll ans = 0;
    for (int i=0; i<n; i++)cin>>v[i];
    for (int t = 0; t<=z; t++){
        ll pos = k - 2*t;
        if (pos<0)break;
        ll mx = 0, s = 0;
        for (int i=0; i<=pos; i++){
            if (i<n-1) mx = max(mx, v[i] + v[i+1]);
            s+=v[i];
        }
        ans = max(ans, s+mx*t);
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