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
    ll n,m;
    cin>>n>>m;
    vector <string> s(n);
    // vector <vector <ll> > b(n, vector <ll> (5, 0));
    for (int i=0; i<n; i++) cin>>s[i];
    vector <ll> a(m);
    ll ans = 0;
    for (int i=0; i<m; i++) cin>>a[i];
    for (int i=0; i<m; i++) {
        ll ma = 0;
        vector <ll> v2(5, 0);
        for (int j=0; j<n; j++){
            v2[s[j][i]-'A']++;
        }
        for (int j=0; j<5; j++){
            ma = max(ma, v2[j]);
        }
        ans += ma * a[i];
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