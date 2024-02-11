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
    map <ll,ll> m;
    ll ans = 1;
    for (ll i=0; i<n; i++) {
        ll temp = v[i];
        for (ll j=2; j*j<=temp; j++) {
            if (temp % j == 0) {
                m[j]++;
                while (temp % j == 0) temp/=j;
            }
            // ans = max(ans, m[j]);
        }
        if (temp != 1) m[temp]++;
        // ans = max(ans, m[temp]);
    }
    // cout<<ans<<"\n";
    for (int i=2; i<=*max_element(v.begin(), v.end()); i++){
        ans = max(ans, m[i]);
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