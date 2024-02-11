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

int f(ll &n) {
    string s = to_string(n);
    char maxchar = '0', minchar = '9';
    for (auto d:s){
        maxchar = max(maxchar, d);
        minchar = min(minchar, d);
    }
    return maxchar - minchar;
}

void solve(){
    ll l, r;
    cin>>l>>r;
    ll lcount = f(l), ans = l;
    for (int i=0; i<=min(1000LL, r-l); i++) {
        ll a = l+i;
        if (f(a) > lcount){
            lcount = f(a);
            ans = a;
        }
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