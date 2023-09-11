#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n, sum=0;
    cin>>n;
    vector <ll> v(n+1);
    v.push_back(-10);
    for (int i=1;i<=n;i++){
        cin>>v[i];
        if (i!=1){
            v[i]+=v[i-1];
        }
    }
    ll m;
    cin>>m;
    vector <ll> sol;
    while (m--){
        ll req;
        cin>>req;
        ll l = 1, r = n;
        while (l<=r){
            ll mid = (l+r)/2;
            if (v[mid]>=req)r=mid-1;
            else l=mid+1;
        }
        sol.push_back(r+1);
    }
    for (auto d:sol){
        cout<<d<<"\n";
    }
}

int main() 
{
    // lTxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}