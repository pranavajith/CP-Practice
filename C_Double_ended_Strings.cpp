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
    string s,t;
    cin>>s>>t;
    int n = s.size(), m = t.size();
    vector<vector<int> > dp(n+1, vector<int> (m+1, 0));
    int ans = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (s[i] == t[j]) dp[i+1][j+1] = dp[i][j] + 1;
            // else dp[i]
            ans = max(ans, dp[i+1][j+1]);
        }
    }
    cout<<n+m-2*ans<<"\n";
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