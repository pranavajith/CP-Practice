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
    ll n;
    // cout<<"hey";
    cin>>n;
    map <ll,ll> m;
    for (ll i=0;i<n;i++){
        // cout<<"hey";
        ll a;
        cin>>a;
        // cout<<a;
        m[a]++;
    }
    vector <ll> v(100001, 0);
    for (ll i=1;i<100001; i++){
        ll a = 1LL*m[i]*i;
        if (i>=2)a+=v[i-2];
        v[i] = max(v[i-1],a);
    }
    cout<<v[100000];
    // cout<<"hi!";
    // vector <ll> v(10001, 0);
    // v[1]=m[1];
    // for (int i=2;i<1e7;i++){
    //     v[i]=max(v[i-1], v[i-2]+i*m[i]);
    // }
    // cout<<v[n];
}

int main() 
{
    // cout<<"hey";
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}