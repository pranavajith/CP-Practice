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
    ll n,a,b;
    cin>>n;
    map <ll,ll> vertical, horizontal, fwd, bkd;
    for (int i=0; i<n; i++){
        cin>>a>>b;
        vertical[b]++; horizontal[a]++; fwd[b-a]++; bkd[a+b]++;
    }
    ll ans = 0;
    for (auto d:vertical) ans += d.second*(d.second-1);
    for (auto d:horizontal) ans += d.second*(d.second-1);
    for (auto d:fwd) ans += d.second*(d.second-1);
    for (auto d:bkd) ans += d.second*(d.second-1);
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