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
    ll n,x;
    cin>>n>>x;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    vector <ll> pref(n);
    pref[0] = v[0];
    for (int i=1; i<n; i++) pref[i] = pref[i-1] + v[i];
    vector <ll> maxlensum(n);
    for (int i=0; i<n;i++){
        ll mx = pref[i];
        for (int j=i+1; j<n; j++){
            mx = max(mx, pref[j] - pref[j-(i+1)]);
        }
        maxlensum[i] = mx;
    }
    for (int k=0; k<=n; k++){
        ll max1 = -1e9;
        for (int len=0; len<n; len++){
            max1 = max(max1, maxlensum[len] + min(len+1, k)*x);
        }
        if (max1 < 0) max1 = 0;
        cout<<max1<<" ";
    }
    cout<<"\n";
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