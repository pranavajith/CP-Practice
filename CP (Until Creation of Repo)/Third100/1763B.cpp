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

bool check(vector <ll> a, vector <ll> b){
    return a[1]<b[1];
}
bool check2(vector <ll> a, vector <ll> b){
    return a[0]<b[0];
}

void solve(){
    ll n,k;
    cin>>n>>k;
    // vector <vector <ll> > v;
    pair <ll,ll> mon[n];
    // vector <ll> h(n);
    // vector <ll> p(n);
    for (int i=0;i<n;i++)cin>>mon[i].second;
    for (int i=0;i<n;i++)cin>>mon[i].first;
    // for (int i=0;i<n;i++){
    //     vector <ll> temp;
    //     temp.push_back(h[i]);
    //     temp.push_back(p[i]);
    //     v.push_back(temp);
    // }
    sort(mon,mon+n);
    // sort(v.begin(),v.end(),check);
    // bool flag = false;
    // ll h1=0;
    // ll pointer1 = 0;
    ll i=0;
    ll h1 = 0;
    for (i=0;i<n && k>0;){
        h1+=k;
        while (mon[i].second<=h1 && i<n)i++;
        k-=mon[i].first;
    }
        // sort(v.begin(),v.end(),check);
        // h1+=k;
        // for (int i=0;i<n;i++){
        //     if (v[i][0]>h1)break;
        //     v[i][1]=INT_MAX;
        // }
        // sort(v.begin(),v.end(),check);
        // if (v[0][1]==INT_MAX){
        //     flag = true;
        //     break;
        // }
        // k-=v[0][1];
    //     h1+=k;
    //     if (v[pointer1][0])
    //     // if (k<=0)break;
    // }
    if (i==n)cout<<"YES\n";
    else cout<<"NO\n";
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