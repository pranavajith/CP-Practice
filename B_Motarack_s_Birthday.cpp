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
    ll n;
    cin>>n;
    bool check = false;
    vector <ll> v1(n), v;
    for (int i=0; i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    for (int i=0; i<n; i++){
        if (v[i]==-1){
            if (i>0 && v[i-1]!=-1)v1.push_back(v[i-1]);
            if (i<n-1 && v[i+1]!=-1)v1.push_back(v[i+1]);
        }
    }
    ll w = (*min_element(v1.begin(), v1.end()) + *max_element(v1.begin(), v1.end()))/2;
    ll w2 = w+1;
    ll minans = 0, minans2 = 0;
    for (int i=0; i<n; i++){
        if (v[i]==-1){
            if (i>0 && v[i-1]!=-1){
                minans += abs(v[i-1]-w);
                minans += abs(v[i-1]-w2);
            }
            if (i<n-1 && v[i+1]!=-1){
                minans += abs(v[i+1]-w);
                minans += abs(v[i+1]-w2);
            }
        }
    }
    if (minans2 > minans) cout<<w<<" "<<minans<<"\n";
    else cout<<w2<<" "<<minans2<<"\n";
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