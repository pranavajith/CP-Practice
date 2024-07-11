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

bool intersect(int a, int b, int c, int d) {
    if (max(a, c) <= min(b, d)) return true;
    return false;
}

void solve(){
    int n, k, d, w; cin >> n >> k >> d >> w;
    vector<int> vec(n); for (auto &v: vec) cin >> v;
 
    int cnt = 0, idx = 0, time_set = 0, doses_left = 0;
    while (idx != n) {
        if (!doses_left || !intersect(time_set, time_set + d, vec[idx], vec[idx] + w)) {
            time_set = vec[idx] + w;
            doses_left = k;
            ++cnt;
        } else {
            doses_left--;
            ++idx;
        }
    }
 
    cout << cnt << '\n';
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