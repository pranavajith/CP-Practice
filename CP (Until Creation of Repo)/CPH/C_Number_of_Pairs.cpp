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
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll sol=0;
    for (int i=0;i<n-1;i++){
        // cout<<upper_bound(v.begin()+i+1,v.end(),r-v[i])-v.begin()<<" "<<lower_bound(v.begin()+i+1,v.end(),l-v[i])-v.begin()<<"\n";
        sol+=upper_bound(v.begin()+i+1,v.end(),r-v[i])-v.begin();
        sol-=lower_bound(v.begin()+i+1,v.end(),l-v[i])-v.begin();
    }
    cout<<sol<<"\n";
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}