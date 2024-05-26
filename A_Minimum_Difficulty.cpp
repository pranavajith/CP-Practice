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
    ll ans = 1e9;
    for (int i=1; i<n-1; i++){
        ll ans1 = 0;
        // for (int j=1)
        vector <ll> temp;
        for (int j=0; j<n; j++) {
            if (j!=i) temp.push_back(v[j]);
        }
        for (int j=1; j<n-1; j++){
            ans1 = max(ans1, temp[j] - temp[j-1]);
        }
        ans = min(ans, ans1);
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