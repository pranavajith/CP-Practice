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
    ll n,q, sum1=0, maxa=0;
    cin>>n>>q;
    vector  <ll>  v, v1;
    v.push_back(0);
    v1.push_back(0);
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v1.push_back(v1[v1.size()-1]+a);
        if (i==0)v.push_back(a);
        else v.push_back(max(a,v[v.size()-1]));
    }
    // for (auto d:v)cout<<d.first<<" "<<d.second<<"\n";cout<<"\n";
    while (q--){
        ll b;
        cin>>b;
        ll ind = upper_bound(v.begin(), v.end(),b)-v.begin();
        cout<<v1[ind-1]<<" ";
        // ll l = 0, r=v.size()+1;
        // while(l<=r){
        //     ll mid = (l+r)/2;
        //     if (v[mid].first>b)r=mid-1;
        //     else l=mid+1;
        // }
        // cout<<l-1<<" "<<v[l-1].second<<"\n";
        // ll i;
        // for (i=0;i<v.size();i++){
        //     if (v[i].first>b)break;
        // }
        // cout<<v[i-1].second<<" ";
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