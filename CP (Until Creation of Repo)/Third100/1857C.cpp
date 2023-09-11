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
    ll n;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<(n*(n-1)/2);i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    // for (auto d:v)cout<<d<<" ";cout<<"\n";
    // cout<<v[2]<<" lol ";
    ll i = n-1, ind = 0;
    while (i>=1){
        // cout<<ind<<" :indbefore ";
        cout<<v[ind]<<" ";
        ind+=i; i--;
        // cout<<"ind: "<<ind<<" i: "<<i<<" ";
    }
    cout<<v[v.size()-1]<<"\n";
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