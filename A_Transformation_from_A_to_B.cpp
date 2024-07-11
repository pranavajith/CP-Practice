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
    ll a, b, f = 0;
    cin >> a >> b;
    vector<ll> ans;
    ans.push_back(b);
    while (b) {
        if (b % 10 == 1) {
            b /= 10;
        }
        else if (b & 1) {
            cout << "NO\n";
            return;
        }
        else {
            b /= 2;
        }
        ans.push_back(b);
        if (b == a) {
            break;
        }
    }
    if (!b)
        cout << "NO\n";
    else {
        cout << "YES\n";
        cout << ans.size() << '\n';
        for (int i = ans.size() - 1; i >= 0; i--)
            cout << ans[i] << ' ';
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