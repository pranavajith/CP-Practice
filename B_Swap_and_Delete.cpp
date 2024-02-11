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
    string s;
    cin>>s;
    // sort(s.begin(), s.end());
    // string s2 = s;
    // reverse(s2.begin(), s2.end());
    // ll ans = 0;
    // for (int i=0; i<s.size(); i++) {
    //     if (s[i] == s2[i]) ans++;
    // }
    // cout<<ans<<"\n";
    ll count1 = 0, count0 = 0;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == '0') count0++;
        else count1++;
    }
    // if (count1 == count0) cout<<0<<"\n";
    // else cout<<max(count1, count0) - min(count1, count0)<<"\n";
    ll ans = 0;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == '1')  {
            if (count0) count0--;
            else {
                ans = s.size()-i; break;
            }
        }
        else {
            if (count1) count1--;
            else {
                ans = s.size()-i; break;
            }
        }
    }
    cout<<ans<<"\n";
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