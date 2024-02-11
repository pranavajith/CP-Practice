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
    string s1,s2;
    cin>>s1>>s2;
    vector <ll> pref(n), suf(n);
    ll check = 0;
    for (int i=0; i<n; i++) {
        if (check < m && s1[i] == s2[check]) check++;
        pref[i] = check;
    }
    check = m-1; ll count1 = 0;
    for (int i=n-1; i>=0; i--) {
        if (check >= 0 && s1[i] == s2[check]){
            check--; count1++;
        }
        suf[i] = count1;
    } 
    // cout<<"ok";
    // for (auto d:pref) cout<<d<<" "; cout<<"\n";
    // for (auto d:suf) cout<<d<<" "; cout<<"\n";
    ll a;
    cin>>a;
    if (pref[n-1] != m) {
        while (a--) cout<<"NO\n";
        return;
    }
    while (a--) {
        ll l,r;
        cin>>l>>r; l--, r--; 
        ll ans1 = 0;
        if (l>0) ans1 += pref[l-1];
        if (r<n-1) ans1 += suf[r+1];
        if (ans1 >= m) cout<<"YES\n";
        else cout<<"NO\n";
    }
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