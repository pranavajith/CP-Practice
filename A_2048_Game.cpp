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
    int n;cin >> n;
    vector<int> a(64, 0);
    for (int i = 0; i < n; i++) {
        int x;cin >> x;
        int cnt = 0;
        while (x % 2 == 0)
            x /= 2, cnt++;
        a[cnt]++;
    }
    for (int i = 0; i < 11; i++) {
        a[i + 1] += a[i] / 2;
        a[i] %= 2;
    }
    if (a[11])
        cout << "YES" << endl;
    else cout << "NO" << endl;
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