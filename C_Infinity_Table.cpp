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

ll sum(ll first, ll diff, ll n) { return n * (2 * first + (n - 1) * diff) / 2; }


void solve() {
  ll k;
  cin >> k;
  ll lo = 1, hi = 1e9;
  while (lo < hi) {
    ll mi = lo + hi >> 1;
    if (sum(1, 2, mi) >= k) {
      hi = mi;
    } else {
      lo = mi + 1;
    }
  }
  ll r = k, c = 0;
  k -= sum(1, 2, lo - 1);
  if (k <= lo) {
    r = k;
    c = lo;
  } else {
    r = lo;
    c = lo - (k - lo);
  }
  cout << r << ' ' << c;
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