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
    map <ll,ll> m;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        m[a%10]++;
        if (m[a%10]<=3)v.push_back(a%10);
    }
    // for (auto d:v)cout<<d<<" ";
    for (int i=0;i<v.size();i++){
        for (int j=i+1;j<v.size();j++){
            for (int k=j+1;k<v.size();k++){
                if ((v[i]+v[j]+v[k])%10 == 3){
                    cout<<"YES\n";
                    return;
                }
            }
        }
    }
    cout<<"NO\n";
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