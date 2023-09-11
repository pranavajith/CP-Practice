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
    ll n,k;
    cin>>n>>k;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll mex;
    for (int i=0;i<n+1;i++){
        if (find(v.begin(),v.end(),i)==v.end()){
            mex=i;
            break;
        }
    }
    while (k--){
        ll fin = v[n-1];
        for (int i=0;i<n;i++){
            ll temp = v[i];
            v[i] = mex;
            mex = temp;
        }
        mex = fin;
    }
    for (auto d:v)cout<<d<<" ";cout<<"\n";
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