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
    long long a[n];
    long long ans = 1e18;
    for (int i=0; i<n; i++) cin>>a[i];
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R' && s[i + 1] == 'L') {
            ans = min(ans, a[i+1] - a[i]);
        }
    }
    if (ans == 1e18) {
        cout << -1;
        return;
    }
    cout << ans / 2;
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