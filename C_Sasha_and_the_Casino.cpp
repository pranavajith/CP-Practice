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
    ll k, x, a; 
    cin>>k>>x>>a;
    // if (x>=(a*(a+1))/2) {
    //     cout<<"NO\n";
    //     return;
    // }
    ll untilnow = 0, cur = 1;
    for (ll i=1; i<=x; i++){
        // ll cur = 1;
        cur = untilnow/(k-1) + 1;
        // while ((k-1) * cur <= untilnow) cur++;
        if (untilnow + cur > a) {
            // cout<<i<<" ";
            cout<<"NO\n";
            return;
        }
        untilnow += cur;
        // cout<<untilnow<<" ";
    }
    //  while ((k-1) * cur <= untilnow) cur++;
    cur = untilnow/(k-1) + 1;
    if (untilnow + cur > a) {
            // cout<<i<<" ";
            cout<<"NO\n";
            return;
    }
    cout<<"YES\n";
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