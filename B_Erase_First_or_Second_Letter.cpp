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
    string s;
    cin>>s;
    map <ll, vector <ll> > m;
    // ll ans = n*(n+1)/2;
    ll ans1 = 0;
    for (int i=0; i<n; i++) {
        m[s[i] - 'a'].push_back(i);
    }
    // for (auto d:m) {
    //     cout<<d.first<<" : ";
    //     for (auto e:d.second) cout<<e<<" "; cout<<"\n";
    // }
    // for (int i=0; i<n; i++) {
    //     if (m[s[i] - 'a'].back() == i) ans += n - i;
    //     else {
    //         ll lol = upper_bound(m[s[i] - 'a'].begin(), m[s[i] - 'a'].end(), i) - (m[s[i] - 'a'].begin());
    //         ans1 += upper_bound(m[s[i] - 'a'].begin(), m[s[i] - 'a'].end(), i) - (m[s[i] - 'a'].begin());
    //     }
    //     // cout<<upper_bound(m[s[i] - 'a'].begin(), m[s[i] - 'a'].end(), i) - (m[s[i] - 'a'].begin() + i)<<"\n";
    // }
    for (auto d:m){
        ans1 += n - d.second[0];
    }
    cout<<ans1<<"\n";
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