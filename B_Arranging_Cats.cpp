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
    string s,t;
    cin>>s>>t;
    // ll count1s = count(s.begin(), s.end(), '1');
    // ll count1t = count(t.begin(), t.end(), '1');
    ll snott = 0, tnots = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == '1' && t[i] != '1') snott++;
        else if (t[i] == '1' && s[i] != '1') tnots++;
    }
    ll ans = min(tnots, snott);
    tnots-=ans, snott-=ans;
    if (tnots > 0) cout<<ans + tnots<<"\n";
    else {
        cout<<ans + snott<<"\n";
    }
    
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