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

ll n,k;

// ll check(ll mid) {
//     ll temp = mid/n;
//     if (k + temp == ) return 1;
//     if (mid - k > temp) return 2;
//     return 3;
// }

void solve(){
    cin>>n>>k;
    ll l = k, r = 1e10, ans = 0;
    while (true) {
        ll mid = l + (r-l)/2;
        if (mid/n + k == mid) {
            cout<<mid<<"\n";
            return;
        }
        else if (mid/n + k < mid) r = mid;
        else l = mid;
    }
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