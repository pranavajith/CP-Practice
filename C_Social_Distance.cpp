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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector <ll> v;
    ll cnt0 = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == '0') {
            cnt0++;
            if (i==n-1) v.push_back(cnt0);
        }
        else {
            if (cnt0 != 0) v.push_back(cnt0);
            cnt0 = 0;
        }
    }
    // if (count(s.begin(), s.end(), '0') )
    if (v.size() == 1 && v[0] == n) {
        cout<<(n-1)/(k+1) + 1<<"\n";
        return;
    }
    ll ans = 0;
    for (int i=0; i<v.size(); i++) {
        if (((i==0 && s[0] == '0') || (i==v.size()-1 && s[n-1] == '0')) && v[i] > k) {
                ans++;
                v[i]--;
        }
        if (v[i] > 2*k) {
            v[i]-=2*k;
            ans += (v[i]-1) / (k+1) + 1;
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