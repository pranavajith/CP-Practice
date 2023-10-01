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
    ll n,k;
    cin>>n>>k;
    vector <ll> v;
    v.push_back(1);
    // v.push_back(n);
    for (ll i=2;i*i<=n;i++){
        if (n%i==0)v.push_back(i);
        // if (n/i != i)v.push_back(n/i);
    }
    // bool check = false;
    // if (v[v.size()-1]*v[v.size()-1]==n)check = true;
    // // cout<<v.size();
    // if (check){
    //     if (k <= v.size()){
    //         cout<<v[k-1];
    //     }
    //     else if (k<=(v.size())*2-1){
    //         cout<<n/v[v.size()-(k-v.size())-1];
    //     }
    //     else cout<<-1;
    // }
    // else{
    //     if (k<=v.size()){
    //         cout<<v[k-1];
    //     }
    //     else if (k<=v.size()*2){
    //         cout<<n/v[k-v.size()-1];
    //     }
    //     else cout<<-1;
    // }
    sort(v.begin(), v.end());
    // if (k>v.size())cout<<-1<<"\n";
    // else cout<<v[k-1]<<"\n";
    if (k<=v.size())cout<<v[k-1]<<"\n";
    else{
        ll solind = 2*v.size()-k;
        if (v[v.size()-1]*v[v.size()-1]==n)solind--;
        if (solind < 0)cout<<-1<<"\n";
        else cout<<n/v[solind]<<"\n";
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}