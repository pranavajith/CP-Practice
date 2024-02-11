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
    string s; ll cost;
    cin>>s>>cost;
    ll n = s.size();
    map <char, ll > m;
    ll curcost = 0;
    for (int i=0; i<n; i++) {
        m[s[i]]++;
        curcost += s[i]-'a'+1;
    }
    if (curcost <= cost) {
        cout<<s<<"\n";
        return;
    }
    // int rem = 0;
    string ans;
    for (int i=25; i>=0; i--) {
        if (curcost - (m['a' + i] * (i+1)) >= cost) curcost -= (m['a' + i] * (i+1));
        else {
            int rem = cost - (curcost - (m['a' + i] * (i+1)));
            for (auto d:s) {
                if (d < 'a'+i) ans += d;
                else if (d == 'a' + i) {
                    if (rem - (i+1) >= 0) {
                        rem -= (i+1);
                        ans += d;
                    }
                }
            }
            break;
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