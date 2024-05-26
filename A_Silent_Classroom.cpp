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
    ll n; cin>>n;
    vector <ll> v(26, 0);
    for (int i=0; i<n; i++){
        string s; cin>>s;
        v[s[0]-'a']++;
    }
    ll ans = 0;
    for (int i=0; i<26; i++){
        ll a = v[i]/2, b = (v[i]+1)/2;
        ans += a * (a-1)/2 + b * (b-1) / 2;
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