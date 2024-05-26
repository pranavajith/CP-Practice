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
    bool pos = true;
    if (v[0] < 0) pos = false;
    ll ans = 0;
    ll a = v[0];
    for (int i=1; i<n; i++){
        if ((pos && v[i]<0) || (!pos && v[i]>0)) {
            ans += a;
            a = v[i];
            if (v[i] > 0) pos = true;
            else pos = false;
        }
        else a = max(a, v[i]);
    }
    ans += a;
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