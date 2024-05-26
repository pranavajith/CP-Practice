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
    for (auto& x : a)
        cin >> x;
    vector<int> cnt(101);
    for (int i = 0; i < n; i++)
        cnt[a[i]]++;
    vector<int> b;
    for (int i = 0; i < 101; i++) {
        if (cnt[i] % 2 != 0)
            b.push_back(i);
    }
    int64_t sum = 0;
    assert(b.size() % 2 == 0);
    sort(a.begin(), a.end());
    for (int i = 1; i < b.size(); i += 2) {
        sum += b[i] - b[i - 1];
    }
    cout << sum;
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