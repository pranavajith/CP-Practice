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
    if (n==1) {
        cout<<0<<"\n";
        return;
    }
    vector <ll> curmax (n,0); ll check = 0;
    for (int i=n-1; i>=0; i--){
        if (i==n-1){
            check = v[i];
        }
        else {
            check = max(check, v[i]);
        }
        curmax[i] = check;
    }
    vector <ll> ans (n, 0);
    // ll prev = v[n-1];
    for (int i=n-2; i>=0; i--){
        if (v[i] == v[i+1]) ans[i] = ans[i+1];
        else if (v[i] < v[i+1]) ans[i] = ans[i+1]+1;
        else if (v[i] != curmax[i]){
            ll ind = i+1;
            while (ind<n && v[ind]<=v[i]) ind++;
            if (ind != n) {
                ans[i] = ans[ind] + 1;
            }
        }
    }
    for (int i=0; i<n; i++) cout<<ans[i]<<" ";
    
    // ll curmax = v[n-1], curmaxind = n-1;
    // for (int i=n-2; i>=0; i--){
    //     if (v[i] >= curmax) {
    //         curmax = v[i];
    //         curmaxind = i;
    //     }
    //     else {
    //         maxcur[i] = curmaxind;
    //     }
    // }
    // vector <ll> ans(n,0);
    // for (ll i=n-2; i>=0; i--){
    //     ans[i] = maxcur[i] - i;
    // }
    // for (int i=0; i<n; i++) cout<<ans[i]<<" ";
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