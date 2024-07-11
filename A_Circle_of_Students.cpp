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
    vector<int> a(n);
    // cin >> a;
    for (int i=0; i<n; i++) cin>>a[i];
    int i = 0;
    while (a[i] != 1) ++i;
    string ans = "YES";
    if (n != 1) {
        if (a[(i + 1) % n] == 2) {
            int k = 1;
            for (int j = i; j < i + n; ++j) if (a[j % n] != k++) ans = "NO";
        } else if (a[(i + n - 1) % n] == 2) {
            int k = 1;
            for (int j = i; j > i - n; --j) if (a[(j + n) % n] != k++) ans = "NO";
        } else ans = "NO";
    }
    cout << ans;
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