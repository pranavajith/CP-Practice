#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,m;
    cin>>n>>m;
    vector <ll> t(n), low(n), high(n);
    for (int i=0; i<n; i++){
        cin>>t[i]>>low[i]>>high[i];
    }
    int prev = 0;
    bool check = true;
    ll mn = m, mx = m;
    for (int i=0;i<n;i++){
        mx +=t[i]-prev;
        mn -=t[i]-prev;
        if (mx < low[i] || mn > high[i]){
            check = false;
            break;
        }
        mx = min(mx, high[i]);
        mn = max(mn, low[i]);
        prev = t[i];
    }
    if (check)cout<<"YES\n";
    else cout<<"NO\n";
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