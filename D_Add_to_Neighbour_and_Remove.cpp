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

void solve(){
    ll n;
    cin>>n;
    vector<ll> a;
    for (int i=0;i<n;i++){
        ll a1;
        cin>>a1;
        a.push_back(a1);
    }
    ll sum = accumulate(a.begin(), a.end(), 0LL);
    for (int i = n; i >= 1; i--) {
    if (sum % i == 0) {
      ll needSum = sum / i;
      ll curSum = 0;
      bool ok = true;
      for (int j = 0; j < n; j++) {
        curSum += a[j];
        if (curSum > needSum) {
          ok = false;
          break;
        } else if (curSum == needSum) {
          curSum = 0;
        }
      }

      if (ok) {
        cout << n - i << endl;
        return;
      }
    }
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