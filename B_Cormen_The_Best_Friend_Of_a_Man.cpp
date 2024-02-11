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
    vector <ll> v(n); 
    ll ans = 0;
    for (int i=0; i<n; i++) cin>>v[i];
    for (int i=1; i<n; i++) {
        if (v[i] + v[i-1] < k) {
            ans += (k - (v[i] + v[i-1]));
            v[i] += (k - (v[i] + v[i-1]));
        }
    }
    cout<<ans<<"\n";
    for (auto d:v) cout<<d<<" ";
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