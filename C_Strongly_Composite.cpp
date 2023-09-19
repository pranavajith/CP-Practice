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
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    map <ll, ll> m;
    for (int j=0;j<n;j++){
        // ll a = v[j];
        for (int i=2;i*i<=v[j];i++){
            // if (v[j]%i==0){
                while (v[j]%i==0){
                    // cout<<"i "<<i<<" "<<v[j]<<" ";
                    m[i]++;
                    v[j]/=i;
                }
            // }
        }
        if (v[j]!=1)m[v[j]]++;
    }
    // cout<<m[2]<<" "<<m[3]<<"\n";
    ll sol = 0, ind = 0;
    // cout<<m.size()<<"\n";
    for (auto d:m){
        // cout<<d.first<<" "<<d.second<<"\n";
        sol+=d.second/2;
        d.second%=2;
        // while (d.second>1){
        //     sol++;
        //     d.second-=2;
        // }
        ind+=d.second;
    }
    cout<<sol+ind/3<<"\n";
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