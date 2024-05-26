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
    map <ll,ll> m;
    ll maxoc = 0;
    vector <ll> v(n);
    for (int i=0; i<n; i++) {
        cin>>v[i];
    }
    if (count(v.begin(), v.end(), v[0]) == n) {
        cout<<0<<"\n";
        return;
    }
    ll leftCheck = 0, rightCheck = 0;
    for (int i=0; i<n; i++) {
        if (v[i] != v[0]) break; leftCheck++;
    }
    for (int i=n-1; i>=0; i--) {
        if (v[i] != v[n-1]) break; rightCheck++;
    }
    // cout<<n - maxoc<<"\n";
    if (v[0] == v[n-1]) cout<<n-(leftCheck + rightCheck)<<"\n";
    else cout<<n-max(leftCheck, rightCheck)<<"\n";
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