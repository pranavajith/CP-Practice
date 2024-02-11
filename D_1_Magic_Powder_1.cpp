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
    vector <ll> v(n); for (int i=0; i<n; i++) cin>>v[i];
    vector <ll> b(n); for (int i=0; i<n; i++) cin>>b[i];
    ll ans;
    for (int i=0; i<n; i++){
        if (i==0) ans = b[i]/v[i];
        else ans = min(ans, b[i]/v[i]);
    }
    for (int i=0; i<n; i++){
        b[i]-=v[i]*ans;
    }
    while (k){
        for (int i=0; i<n; i++){
            if (k < v[i] - b[i]){
                cout<<ans<<"\n";
                return;
            }
            if (v[i] > b[i]) {
                k -= v[i] - b[i];
                b[i] += v[i] - b[i];
            }
            b[i] -= v[i];
        }
        ans++;
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