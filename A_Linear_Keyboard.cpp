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
    string first; cin>>first; vector <ll> v(26, 0);
    for (int i=0; i<26; i++){
        v[first[i]-'a'] = i;
    }
    string s; cin>>s;
    ll ans = 0;
    for (int i=1; i<s.size(); i++) ans += abs(v[s[i]-'a'] - v[s[i-1]-'a']);
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