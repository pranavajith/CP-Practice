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
    vector <ll> v1(n);
    vector <ll> v2(m);
    for (int i=0;i<n;i++)cin>>v1[i];
    sort(v1.begin(),v1.end());
    for (int i=0;i<m;i++){
        ll a;
        cin>>a;
        ll ind = upper_bound(v1.begin(),v1.end(),a)-v1.begin();
        v2[i]=ind;
    }
    for (int i=0;i<m;i++){
        cout<<v2[i]<<" ";
    }
}

int main() 
{
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}