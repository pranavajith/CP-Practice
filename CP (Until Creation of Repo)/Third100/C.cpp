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
    map <int,int> m;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
        m[a]=max(m[a],i+1);
    }
    if (n==1 && v[0]!=1)cout<<"NO\n";
    else if (n==1 && v[0]==1)cout<<"YES\n";
    else if (v[0]!=v.size())cout<<"NO\n";
    else{
        vector <ll> check(v[0],0);
        for (auto i:m){
            check[i.first-1]=i.second;
        }
        for (int i=v[0]-2;i>=0;i--){
            if (check[i]==0)check[i]=check[i+1];
        }
        // for (auto d: check){
        //     cout<<d<<" ";
        // }
        if (check==v)cout<<"YES\n";
        else cout<<"NO\n";
    }
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