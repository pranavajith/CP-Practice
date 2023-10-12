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
    vector <ll> l(n,1),r(n,1);
    for (int i=n-2; i>=0; i--){
        if (v[i]<v[i+1])r[i]=r[i+1]+1;
        else r[i]=1;
    }
    // for (auto d:r)cout<<d<<" "; cout<<"\n";
    for (int i=1; i<n; i++){
        if (v[i]>v[i-1])l[i]=l[i-1]+1;
        else l[i]=1;
    }
    // for (auto d:r)cout<<d<<" "; cout<<"\n";
    ll lmax = *max_element(l.begin(), l.end());
    ll rmax = *max_element(r.begin(), r.end());
    // cout<<lmax<<" "<<rmax<<" ";
    ll ans = max(lmax, rmax);
    // cout<<ans<<"\n";
    for (int i=0; i<n-2;i++){
        if (v[i]<v[i+2])ans = max(ans, l[i] + r[i+2]);
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