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
    double b;
    cin>>n>>b;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    // sort(v.begin(),v.end());
    ll maxel = *max_element(v.begin(),v.end());
    ll minvol = 0;
    for (int i=0;i<n;i++){
        minvol+=maxel-v[i];
    }
    if (minvol > b)cout<<-1<<"\n";
    else{
        vector <double> v1;
        b-=minvol;
        for (int i=0;i<n;i++){
            v1.push_back((double)maxel-(double)v[i]+b/n);
        }
        for (int i=0;i<n;i++){
            cout<<fixed<<v1[i]<<"\n";
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}