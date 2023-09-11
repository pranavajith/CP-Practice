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

ll gcd(ll a, ll b){
    if (b==0)return a;
    return gcd(b,a%b);
}

void solve(){
    ll n, minel = INT_MAX;
    cin>>n;
    vector <ll> v1;
    vector <ll> v2;
    vector <ll> v3;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v1.push_back(a);
        v2.push_back(a);
        minel = min(minel, a);
    }
    // if (n==1)cout<<"YES\n";
    // else{
    sort(v2.begin(),v2.end());
    for (int i=0;i<n;i++){
        if (v1[i]!=v2[i]){
            v3.push_back(v1[i]);
        }
    }
    bool flag = true;
    // for (auto d:v3)cout<<d<<" ";
    // cout<<minel <<" ";
    if (v3.size()==0)cout<<"YES\n";
    else{
    for (int i=0;i<v3.size();i++){
        // cout<<i<<" ";
        if (v3[i]%minel != 0){
            flag = false;
            break;
        }
    }
    if (flag)cout<<"YES\n";
    else cout<<"NO\n";
    // }
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