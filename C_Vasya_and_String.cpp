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
    ll n,k;
    cin>>n>>k;
    string s; cin>>s;
    vector <ll> cnta(n, 0), cntb(n, 0);
    for (int i=0; i<n; i++){
        if (i==0){
            cnta[i] = (s[i] == 'a');
            cntb[i] = (s[i] == 'b');
        }
        else {
            cnta[i] = cnta[i-1] + (s[i] == 'a');
            cntb[i] = cntb[i-1] + (s[i] == 'b');
        }
    }
    // for (auto d:cnta) cout<<d<<" "; cout<<"\n";
    // for (auto d:cntb) cout<<d<<" "; cout<<"\n";
    ll l = 0, r = 0, ans = 0;
    while (r < n){
        ll leftKa = 0; if (l != 0) leftKa = cnta[l-1];
        while (r<n && (cnta[r] - leftKa <= k)) r++;
        ans = max(ans, r-l);
        l++;
    }   
    l = 0, r = 0;
    while (r < n){
        ll leftKa = 0; if (l != 0) leftKa = cntb[l-1];
        while (r<n && (cntb[r] - leftKa <= k)) r++;
        ans = max(ans, r-l);
        l++;
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