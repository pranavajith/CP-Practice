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
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    if (n==1)cout<<1<<"\n"<<v[0]<<"\n";
    else{
        vector <ll> sol;
        sol.push_back(v[0]);
        for (int i=1;i<n;i++){
            if (v[i-1]<=v[i]){
                sol.push_back(v[i]);
            }
            else{
                sol.push_back(v[i]);
                sol.push_back(v[i]);
            }
        }
        cout<<sol.size()<<"\n";
        for (auto d:sol){
            cout<<d<<" ";
        }
        cout<<"\n";
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