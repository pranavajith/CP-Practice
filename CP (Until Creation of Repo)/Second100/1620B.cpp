#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll w,h, k1;
    cin>>w>>h;
    // vector <ll> x_0, x_h, y_0, y_w;
    cin>>k1;
    vector <ll> x_0(k1);
    for (int i=0;i<k1;i++)cin>>x_0[i];
    cin>>k1;
    vector <ll> x_h(k1);
    for (int i=0;i<k1;i++)cin>>x_h[i];
    cin>>k1;
    vector <ll> y_0(k1);
    for (int i=0;i<k1;i++)cin>>y_0[i];
    cin>>k1;
    vector <ll> y_w(k1);
    for (int i=0;i<k1;i++)cin>>y_w[i];

    // for (auto d:x_0)cout<<d<<" ";cout<<endl;
    // for (auto d:x_h)cout<<d<<" ";cout<<endl;
    // for (auto d:y_0)cout<<d<<" ";cout<<endl;
    // for (auto d:y_w)cout<<d<<" ";cout<<endl;
    // cin>>k2;
    // for (int i=0;i<k2;i++){
    //     ll a;
    //     cin>>a;
    //     x_h.push_back(a);
    // }
    // cin>>k3;
    // for (int i=0;i<k3;i++){
    //     ll a;
    //     cin>>a;
    //     y_0.push_back(a);
    // }
    // cin>>k4;
    // for (int i=0;i<k4;i++){
    //     ll a;
    //     cin>>a;
    //     y_w.push_back(a);
    // }
    // sort(x_0.begin(),x_0.end());
    // sort(x_h.begin(),x_h.end());
    // sort(y_0.begin(),y_0.end());
    // sort(y_w.begin(),y_w.end());
    // ll a,b,c,d;
    ll a=abs(x_0[x_0.size()-1]-x_0[0])*h;
    ll b=abs(x_h[x_h.size()-1]-x_h[0])*h;
    ll c=abs(y_0[y_0.size()-1]-y_0[0])*w;
    ll d=abs(y_w[y_w.size()-1]-y_w[0])*w;
    cout<<max(max(a,b),max(c,d))<<endl;


}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}