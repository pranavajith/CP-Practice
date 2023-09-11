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

ll check (vector <ll> v){
    ll count1=0;
    for (int i=0;i<v.size()-1;i++){
        if (v[i+1]<v[i])count1++;
    }
    return count1;
}

void solve(){
    ll n, count1=0;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    // while (check(v)){
    //     auto w = unique(v.begin(),v.end());
    //     v.resize(distance(v.begin(),w));
    //     for (int i=0;i<v.size()-1;i++){
            
    //     }
    // }
    for (int i=0;i<v.size()-1;i++){
        if (v[i+1]<v[i])count1+=v[i]-v[i+1];
    }
    cout<<count1<<"\n";
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