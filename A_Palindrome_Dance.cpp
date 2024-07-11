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
     int n, a, b;
  cin >> n >> a >> b;
  vector<int> c(n);
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  bool ok = true;
  int ans = 0;
  for (int i = 0; i < n / 2; i++) {
    if (c[i] == 2) {
      if (c[n - 1 - i] == 0) {
        ans += a;
      } else if (c[n - 1 - i] == 1) {
        ans += b;
      } else if (c[n - 1 - i] == 2) {
        ans += 2 * min(a, b);
      }
    } else if (c[n - 1 - i] == 2) {
      if (c[i] == 0) {
        ans += a;
      } else if (c[i] == 1) {
        ans += b;
      } else if (c[i] == 2) {
        ans += min(a, b);
      }
    } else if (c[i] != c[n - 1 - i]) {
      ok = false;
      break;
    }
  }
  if (n % 2 == 1 and c[n / 2] == 2) {
    ans += min(a, b);
  }
  if (!ok) {
    ans = -1;
  }
  cout << ans << endl;
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