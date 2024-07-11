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
    int n;
  cin >> n;
  string s;
  cin >> s;
  set<char> cs;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (islower(s[i]) and cs.count(s[i]) == 0) {
      cs.insert(s[i]);
      ans = max(ans, (int) cs.size());
    }
    if (isupper(s[i])) {
      cs.clear();
    }
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