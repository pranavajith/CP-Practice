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
    ll n,a;
    cin>>n;
    vector <ll> v;
    v.push_back(LLONG_MAX);
    for (int i=0; i<n; i++){
        cin>>a; v.push_back(a);
    } 
    v.push_back(LLONG_MAX);
    vector <ll> v1 (v.begin(), v.end());
    sort(v1.begin(), v1.end());
    ll ans = v1[0]/2 + v1[0]%2 + v1[1]/2 + v1[1]%2;
    // cout<<ans<<"\n";
    for (int i=1; i<=n; i++) {
        ll minforthis = min(v[i-1], v[i+1]) + ((max(v[i-1], v[i+1])) - (min(v[i-1], v[i+1])) + 1) / 2;
        ll minadj = min(v[i-1], v[i+1]);
        // minforthis = min(minforthis, (ll)(ceil((float(v[i]) + float(minadj)) / 3)));
        if (minadj*2 <= v[i]) minforthis = min(minforthis, (((v[i]) + 1) / 2));
        else if (v[i]*2 <= minadj) minforthis = min(minforthis, (((minadj) + 1) / 2));
        else minforthis = min(minforthis, (((v[i]) + (minadj) + 2) / 3));
        ans = min(ans, minforthis);
        // cout<<ans<<"\n";
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