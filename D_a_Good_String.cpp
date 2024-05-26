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

ll calc(ll l, ll r, string &s, char c){
    if (r == l) {
        if (s[l] == c) return 0; 
        return 1;
    }
    ll mid = (l+r)/2;
    ll cnt1 = 0, cnt2 = 0;
    for (int i=l; i<=mid; i++) cnt1 += (s[i] == c);
    for (int i=mid+1; i<=r; i++) cnt2 += (s[i] == c);
    return min((r-l+1)/2 - cnt1 + calc(mid+1, r, s, c+1), (r-l+1)/2 - cnt2 + calc(l, mid, s, c+1));
}

void solve(){
    ll n; cin>>n;
    string s; cin>>s;
    cout<<calc(0, n-1, s, 'a')<<"\n";
    // char c = 'a'; cout<<char(c+1);
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