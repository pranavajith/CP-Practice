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
    vector<int> di;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            di.push_back(i);
            if (i * i != n)di.push_back(n / i);
        }
    }
    std::sort(di.begin(), di.end());
    for (int i = di.size() - 1; i >= 0; --i) {
        bitset<32> s = di[i];
        int ix = 0, a = 0, b = 0;
        for (int j = 31; j >=0; --j) {
            if (s[j + 1] == 0 && s[j] == 1)
                ix++;
            if (ix) {
                a += (s[j] == 1);
                b += (s[j] == 0);
            }
        }
        if (ix == 1 && a == b + 1) {
            cout << di[i]<<endl;
            return;
        }
    }
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