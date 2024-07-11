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
     int ans = 0;
    int n; cin >> n;
    int tm = 0;
    vector<int> v(n + 1);
    for (int i = 1;i <= n;i ++)
    {
        cin >> v[i];
    }
    for (int i = 1;i <= n;i ++)
    {
        tm = max(tm, v[i]);
        if(tm == i) ans ++;
    }
    cout << ans << endl;
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