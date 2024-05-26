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
    ll n,k; cin>>n>>k;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    set <ll> s;
    for (int i=0; i<k; i++) {
        ll a; cin>>a; s.insert(a);
    }
    if (s.size() > 1) {
        cout<<"Yes\n"; return;
    }
    for (int i=0; i<n; i++){
        if (v[i] == 0) v[i] = *s.begin();
    }
    if (is_sorted(v.begin(), v.end())) cout<<"No\n";
    else cout<<"Yes\n";
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