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
    ll n,a;
    cin>>n;
    // vector <ll> v(n);
    map <ll,ll> m1;
    for (int i=0; i<n; i++) {
        cin>>a;
        m1[a]++;
    }
    ll mex1 = 0, mex2 = 0; bool check = true;
    for (int i=0; i<=100; i++) {
        if (m1[mex1]==0) break;
        if (m1[mex1]==1) check = false;
        if (check) mex2++;
        mex1++;
    }
    cout<<mex1+mex2<<"\n";
    // vector <ll> prefmex(n, 0), sufmex(n, 0);
    // map <ll, bool> m1,m2;
    // ll mex1 = 0, mex2 = 0;
    // for (int i=0; i<n; i++) {
    //     m1[v[i]] = true;
    //     while (m1[mex1]) mex1++;
    //     prefmex[i] = mex1;
    // }
    // for (int i=n-1; i>=0; i--) {
    //     m2[v[i]] = true;
    //     while (m2[mex2])mex2++;
    //     sufmex[i] = mex2;
    // }
    // ll ans = max(sufmex[0], prefmex[n-1]);
    // for (int i=0; i<n-1; i++) {
    //     ans = max(ans, prefmex[i] + sufmex[i+1]);
    // }
    // cout<<ans<<"\n";

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