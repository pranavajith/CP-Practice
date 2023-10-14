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
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++)cin>>v[i];
    string s;
    cin>>s;
    ll x0 = 0, x1 = 0;
    for (int i=0; i<n; i++){
        if (s[i]=='0')x0^=v[i];
        else x1^=v[i];
    }
    vector <ll> prefsum;
    for (int i=0; i<n; i++){
        if (i==0)prefsum.push_back(v[i]);
        else prefsum.push_back(prefsum.back() ^ v[i]);
    }
    ll m;
    cin>>m;
    while (m--){
        ll a;
        cin>>a;
        if (a==2){
            ll q; cin>>q;
            if (q==1)cout<<x1<<" ";
            else cout<<x0<<" ";
        }
        else{
            ll l,r;
            cin>>l>>r;
            // for (int i=l-1; i<r;i++){
            //     x0^=v[i]; x1^=v[i];
            // }
            ll w = prefsum[r-1];
            if(l!=1)w^=prefsum[l-2];
            x0 ^= w;
            x1 ^= w;
        }
    }
    cout<<"\n";
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