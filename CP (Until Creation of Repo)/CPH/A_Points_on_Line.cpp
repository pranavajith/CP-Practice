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
    ll n,d;
    cin>>n>>d;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll sol = 0;
    for (int i=0;i<n-2;i++){
        ll ind  = upper_bound(v.begin(),v.end(),v[i]+d)-v.begin();
        // cout<<ind<<" ind2; ";
        ind--;
        if (ind == v.size())ind--;
        // cout<<ind<<" ind1; ";
        if (ind-i+1 < 3)continue;
        ll temp = ind-i;
        // cout<<ind<<" "<<temp * (temp-1) / (2)<<"\n";
        sol+= temp * (temp-1) / (2);
    }
    cout<<sol<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}