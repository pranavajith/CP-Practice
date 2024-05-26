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

ll cmp(string a, string b){
    ll ans = 0;
    for (int i=0; i<a.size(); i++){
        ans += abs(a[i] - b[i]);
    }
    return ans;
}

void solve(){
    ll n, k;
    cin>>n>>k;
    vector <string> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    ll ans = LLONG_MAX;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            ans = min(ans, cmp(v[i], v[j]));
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