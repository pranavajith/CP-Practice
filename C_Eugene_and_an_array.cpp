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
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    vector <ll> prefsum; prefsum.push_back(0);
    for (int i=0; i<n; i++) prefsum.push_back(prefsum.back() + v[i]);
    ll i = 0, j = 0, ans = 0; 
    map <ll, bool> m; m[0] = true;
    while (i<n) {
        while (j<n && !m[prefsum[j+1]]) {
            j++;
            m[prefsum[j]] = true;
        }
        ans += j - i;
        m[prefsum[i]] = false;
        i++;
    }
    cout<<ans<<"\n";
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