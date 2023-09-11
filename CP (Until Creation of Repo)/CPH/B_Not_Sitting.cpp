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
    vector <ll> v;
    for (ll i=0;i<n;i++){
        for (ll j=0;j<m;j++){
            v.push_back(max(i,n-i-1)+max(j,m-j-1));
        }
    }
    sort(v.begin(),v.end());
    for (int i=0;i<n*m;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
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