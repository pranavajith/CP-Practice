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
    vector <pair<ll,ll> > v(n);
    for (int i=0; i<n; i++) cin>>v[i].second;
    for (int i=0; i<n; i++) cin>>v[i].first;
    sort(v.begin(), v.end()); v.push_back(make_pair(0,0));
    ll ans = 0;
    for (int i=0; i<n; i++) {
        ans += v[i].second;
        v[i+1].second += v[i].first;
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