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
    ll n, k;
    cin>>n>>k;
    vector <ll> v;
    map <ll,ll> m;
    ll a1 = 0;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (m[a])continue;
        m[a]++;
        if ((v.size()-a1)==k){
            // cout<<"yay1 ";
            v.push_back(a);
            a1++;
            m[v[a1-1]]=0;
        }
        else{
            // cout<<"yay2 ";
            v.push_back(a);
        }
    }
    ll siz = 0;
    for (auto i:m){
        if (i.second!=0)siz++;
    }
    cout<<siz<<"\n";
    reverse(v.begin(),v.end());
    for (int i=0;i<v.size()-a1;i++){
        if (v[i]!=0)cout<<v[i]<<" ";
    }
    cout<<"\n";
}

int main() 
{
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}