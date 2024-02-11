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
    if (n==1){
        cout<<0<<"\n";
        return;
    }
    // ll minExc1 = 1e9, maxExc1 = -1e9, minExcn = 1e9, maxExcn = -1e9;
    ll ans = -1e9;
    // for (int i=0; )
    for (int i=0; i<n; i++) {
        ans = max(ans, v[(i-1+n)%n] - v[i]);
        if (i!=0) ans = max(ans, v[i] - v[0]);
        if (i!=n-1) ans = max(ans, v[n-1] - v[i]);
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