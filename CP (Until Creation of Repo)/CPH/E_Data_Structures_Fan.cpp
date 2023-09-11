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
    vector <pair <ll,ll> > v;
    ll n;
    cin>>n;
    vector <ll> v1(n);
    for (int i=0;i<n;i++)cin>>v1[i];
    string s;
    cin>>s;
    for (int i=0;i<n;i++){
        pair <ll,ll> p;
        p.first = v1[i];
        p.second = s[i]-'0';
        v.push_back(p);
    }
    // for (auto d:v){
    //     cout<<d.first<<" "<<d.second<<"\n";
    // }
    // cout<<"done\n";
    ll m;
    cin>>m;
    while (m--){
        ll a;
        cin>>a;
        if (a==1){
            ll l,r;
            cin>>l>>r;
            for (int i=l-1;i<=r-1;i++){
                if (v[i].second==1)v[i].second = 0;
                else v[i].second = 1;
            }
            // for (auto d:v){
            // cout<<d.first<<" "<<d.second<<"\n";
            // }
            // cout<<"done\n";
        }
        else{
            ll c;
            cin>>c;
            ll res = 0;
                for (int i=0;i<n;i++){
                    if (v[i].second==c)res^=v[i].first;
                
            }
            cout<<res<<" ";
        }
    }
    cout<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}