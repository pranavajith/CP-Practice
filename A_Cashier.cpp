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
     int n, l, a;
        cin >> n >> l >> a;
        int t[n];
        int L[n];
        if (n == 0)
        {
            cout << l / a << "\n";
            return;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> t[i];
 
            cin >> L[i];
        }
 
        int ans = t[0] / a;
        for (int i = 1; i < n; i++)
        {
            int left = t[i] - (t[i - 1] + L[i - 1]);
            ans += max(left / a, 0);
        }
        ans += max((l - (t[n - 1] + L[n - 1])) / a, 0);
        cout << ans << "\n";
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