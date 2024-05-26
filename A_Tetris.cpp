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
    ll m,n;
    cin>>m>>n;
    // vector <ll> v(n);
    map <ll,ll> m1;
    for (int i=0; i<n; i++) {
        ll a; cin>>a; m1[a]++;
    }
    ll ans = 1e9;
    for (int i=1; i<=m; i++){
        ans = min(ans, m1[i]);
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