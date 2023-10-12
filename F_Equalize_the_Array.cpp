#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);
void solve() {
  int n;
  cin >> n;
  map<int, int> cnt;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    cnt[x]++;
  }
  map<int, int> groupedByCnt;
  for ( auto d : cnt) {
    groupedByCnt[d.second]++;
  }

  int res = n;
  int left = 0, right = n, rightCnt = (int) cnt.size();
  for (auto d : groupedByCnt) {
    res = min(res, left + right - rightCnt * d.first);
    // left += x * y;
    // right -= x * y;
    rightCnt -= d.second;
  }
  cout << res << endl;
}

int main() {
  int tests;
  cin >> tests;
  while (tests-- > 0) {
    solve();
  }
  return 0;
}