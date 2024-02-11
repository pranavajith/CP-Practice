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
    string s; ll n; string s1, s2;
    cin>>s>>n>>s1>>s2;
    int curiter = 0;
    for (int i = 0; i<n; i++) {
        ll tempind = -1;
        for (char c = s1[i]; c <= s2[i]; c++) {
            ll temp2 = curiter;
            while (temp2 < s.size() && s[temp2] != c) temp2++;
            if (temp2 == s.size()) {
                cout<<"YES\n";
                 return;
            }
            if (tempind == -1) tempind = temp2;
            else tempind = max(tempind, temp2);
        }
        curiter = tempind + 1;
    }
    cout<<"NO\n";
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