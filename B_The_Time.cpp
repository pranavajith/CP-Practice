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

void solve() {
    string s;
    cin >> s;
 
    int hour = 10*(s[0] - '0') + (s[1] - '0');
    int minute = 10*(s[3] - '0') + (s[4] - '0');
 
    int a;
    cin >> a;
 
    for (int i = 0; i < a; ++i) {
        if (++minute == 60) {
            ++hour;
            minute = 0;
        }
        if (hour == 24)
            hour = 0;
    }
    if (hour <= 9)
        cout << 0;
    cout << hour;
    cout << ':';
    if (minute <= 9)
        cout << 0;
    cout << minute;
    cout << '\n';
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