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
    vector<int> hs(n);
    vector<int> vs(n);
    vector<int> ans;
    for (int i = 0; i < n*n; ++i) {
      int h,v;
      cin >> h >> v;
      if (hs[h-1] == 0 && vs[v-1] == 0) {
        ans.push_back(i+1);
        hs[h-1] = 1;
        vs[v-1] = 1;
      }
    }
    for (auto& a: ans)
      cout << a << " ";
    cout << "\n";
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