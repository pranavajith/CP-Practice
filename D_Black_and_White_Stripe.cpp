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
    ll n,w;
    cin>>n>>w;
    string s;
    cin>>s;
    ll countb = 0;
    for (int i=0; i<w; i++) {
        if (s[i]=='B')countb++;
    }
    // cout<<countb;
    if (w==n){
        cout<<w-countb<<"\n";
        return;
    }
    ll ans = w - countb;
    for (int i=w; i<n; i++){
        if (s[i-w]=='B')countb--;
        if (s[i]=='B')countb++;
        ans = min(ans, w-countb);
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