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
    ll n,m,k,h;
    cin>>n>>m>>k>>h;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll sol = 0;
    for (int i=0;i<n;i++){
        if (abs(v[i]-h)%k == 0 && abs(v[i]-h)/k < m && v[i]!=h){
            // cout<<v[i]<<" ";
            sol++;
        }
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