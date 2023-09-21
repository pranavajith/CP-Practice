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
    ll n,w,h;
    cin>>n>>w>>h;
    vector <ll> cakes(n);
    vector <ll> dispenser(n);
    for (int i=0;i<n;i++)cin>>cakes[i];
    for (int i=0;i<n;i++)cin>>dispenser[i];
    ll max1 = INT_MIN, min1 = INT_MAX;
    for (int i=0;i<n;i++){
        max1= max(max1, cakes[i]-dispenser[i]);
        min1= min(min1, cakes[i]-dispenser[i]);
    }
    if (max1+h-w <= min1-h+w)cout<<"YES\n";
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