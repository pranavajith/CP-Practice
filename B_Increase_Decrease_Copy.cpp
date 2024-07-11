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
    vector<ll> a(n), b(n + 1);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n + 1; ++i)
        cin >> b[i];
 
    ll sum = 0, ext = LLONG_MAX;
    for (int i = 0; i < n; ++i)
    {
        sum += abs(a[i] - b[i]);
    }
 
    for (int i = 0; i < n; ++i)
    {
        ext = min(ext, abs(a[i] - b[n]));
        ext = min(ext, abs(b[i] - b[n]));
        if (min(a[i], b[i]) <= b[n] && b[n] <= max(a[i], b[i]))
        {
            ext = 0;
        }
    }
 
    cout << sum + ext + 1 << '\n';
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