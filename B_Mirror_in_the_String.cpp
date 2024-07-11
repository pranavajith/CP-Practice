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
        string s;
        cin >> n >> s;
 
        int idx = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] >= s[i + 1]) {
                idx++;
            } else {
                break;
            }
        }
 
        if (n != 1 && s[0] == s[1]) {
            cout << s[0] << s[0] << "\n";
            return;
        }
 
        string ans = s.substr(0 , idx + 1);
        cout << ans;
        reverse(ans.begin() , ans.end());
        cout << ans << "\n";
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