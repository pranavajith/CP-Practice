#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

int gcd(ll a, ll b){
    ll a1 = max(a,b);
    ll b1 = min(a,b);
    ll temp = 1;
    while (temp){
        temp = a1%b1;
        a1=b1;
        b1=temp;
    }
    return a1;
}

void solve(){
    ll n, common_prod=1;
    cin>>n;
    vector <ll> v;
    vector <ll> v1;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (count(v.begin(),v.end(),a)==0){
            v.push_back(a);
        }
        else{
            v1.push_back(a);
        }
    }
    // cout<<common_prod<<"\n";
    sort(v.rbegin(),v.rend());
    sort(v1.rbegin(),v1.rend());
    common_prod=v1[0];
    if (v[0]==common_prod)cout<<v[0]<<" "<<v[0]<<"\n";
    else{
    // cout<<gcd(20,8);
    cout<<v[0]<<" ";
    for (int i=1;i<v.size();i++){
        if (gcd(v[i],v[0])==common_prod){
            cout<<v[i]<<"\n";
            break;
        }
    }
    }
}

int main() 
{
    // lTxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}