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
    int w;
    cin>>w;
    vector <ll> v;
    for (int i=0;i<w;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    int n = unique(v.begin(),v.end())-v.begin();
    v.resize(n);
    vector <ll> res(w+1,1);
    for (int i=0;i<n;i++){
        res[v[i]]+=1;
    }
    res[v[0]]--;res[v[n-1]]--;
    ll min1=res[v[0]];
    for (int i=1;i<n;i++){
        min1=min(min1,res[v[i]]);
    }
    cout<<min1<<"\n";
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