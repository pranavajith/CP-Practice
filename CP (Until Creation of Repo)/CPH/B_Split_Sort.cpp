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

void reassign(vector <ll>& v, ll x){
    vector <ll> temp;
    for (int i=0;i<v.size();i++){
        if (v[i]<x)temp.push_back(v[i]);
    }
    for (int i=0;i<v.size();i++){
        if (v[i]>=x)temp.push_back(v[i]);
    }
    for (int i=0;i<v.size();i++)v[i]=temp[i];
}

bool check (vector <ll> v){
    for (int i=0;i<v.size();i++){
        if (v[i]!=i+1)return false;
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> v;
    map <ll,ll> m;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        m[a]=i;
    }
    ll i = n, sol=0;
    while(true){
        if (i==1)break;
        if (m[i]>m[i-1]){
            i--;
        }
        else{
            sol++;
            i--;
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