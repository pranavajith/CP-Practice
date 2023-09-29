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
    ll n1;
    cin>>n1;
    vector <ll> div1;
    for (ll i=0;i<n1;i++){
        ll a;
        cin>>a;
        div1.push_back(a);
    }
    vector <ll> freq1(1e7,0);
    for (ll i=0;i<n1;i++){
        ll a;
        cin>>a;
        freq1[div1[i]]=a;
    }
    ll n2;
    cin>>n2;
    vector <ll> div2;
    for (ll i=0;i<n2;i++){
        ll a;
        cin>>a;
        div2.push_back(a);
    }
    vector <ll> freq2(1e7,0);
    for (ll i=0;i<n2;i++){
        ll a;
        cin>>a;
        freq2[div2[i]]=a;
    }
    if (n2>n1)cout<<0<<"\n";
    else{
        ll temp = 0;
        for (ll i=0;i<n2;i++){
            if (freq1[div2[i]] < freq2[div2[i]]){
                cout<<0<<"\n";
                return;
            }
            freq1[div2[i]]-=freq2[div2[i]];
            if (freq1[div2[i]]==0)temp++;
        }
        ll sol = 1, iter = div1.size()-temp;
        // if (n1==100000 && div1[0]==2 && div1[1]==3 && div1[2]==5 && div1[3]==19)cout<<"hey! "<<iter<<"\n";
        while (iter--){
            sol*=2;
            sol%=998244353;}
        // if (n1==100000 && div1[0]==2 && div1[1]==3 && div1[2]==5 && div1[3]==19)cout<<"hey! "<<sol<<"\n";
        cout<<sol<<"\n";
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