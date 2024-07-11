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
        vector <long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long pre_max = 0, d = 0, mx = 0, ans = 0;
        for(int i = 0; i < n; i++){
            pre_max = max(pre_max, a[i]);
            d = pre_max - a[i];
            ans += d;
            mx = max(mx, d);
        }
        cout << ans + mx << '\n';
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