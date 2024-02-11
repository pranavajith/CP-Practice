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
    ll n; char c; string s;
    cin>>n>>c>>s;
    if (c=='g'){
        cout<<0<<"\n";
        return;
    }
    ll dist = -1;
    for (int i=0; i<n; i++) {
        if (s[i] == 'g') {
            dist = i;
            break;
        }
    }
    ll ans = -1;
    for (int i=n-1; i>=0; i--) {
        dist++;
        if (s[i] == 'g') dist = 0;
        // else dist++;
        if (s[i] == c) ans = max(ans, dist);
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