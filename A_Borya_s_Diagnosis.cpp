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
    int n; cin >> n; 
    vector <ll> s(n, 0), d(n, 0);
    for(int i = 0; i < n; ++i)
        cin >> s[i] >> d[i];
 
    int last = 0;
    for(int i = 0; i < n; ++i) {
        int x = (s[i] <= last ? (last - s[i]) / d[i] + 1 : 0);
        last = s[i] + x * d[i];
    }
 
    cout << last << "\n";
 
    // return 0;
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