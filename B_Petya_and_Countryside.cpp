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
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i]; 
    vector <ll> left(n), right(n);
    ll cnt = 1;
    for (int i=0; i<n; i++){
        if (i==0) left[i] = 1;
        else {
            if (v[i] >= v[i-1]) cnt++;
            else cnt = 1;
            left[i] = cnt;
        }
    }
    cnt = 0;
    for (int i=n-1; i>=0; i--){
        if (i==n-1) right[i] = 0;
        else {
            if (v[i] >= v[i+1]) cnt++;
            else cnt = 0;
            right[i] = cnt;
        }
    }
    // for (auto d:left) cout<<d<<" "; cout<<"\n";
    // for (auto d:right) cout<<d<<" "; cout<<"\n";
    ll ans = 1;
    for (int i=0; i<n; i++) ans = max(ans, left[i] + right[i]); 
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