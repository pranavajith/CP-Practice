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

bool sort1(pair<ll,ll>a, pair<ll,ll> b){
    return (a.first<b.first);
}

void solve(){
    ll n, count1=0;
    cin>>n;
    vector < ll > v1(n);
    vector < ll > v2(n);
    for (int i=0;i<n;i++){
        cin>>v1[i];
    }
    for (int i=0;i<n;i++){
        cin>>v2[i];
    }
    vector < vector <ll> > p;
    ll temp=0;
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (v1[i]>v1[j] || (v1[j]==v1[i] && v2[i]>v2[j])){
                vector <ll> temp2;
                swap(v1[i],v1[j]);
                swap(v2[i],v2[j]);
                temp2.push_back(i+1);
                temp2.push_back(j+1);
                p.push_back(temp2);
                temp++;
            }
        }
    }
    // for (auto d:v1)cout<<d<<" ";cout<<"\n";
    // for (auto d:v2)cout<<d<<" ";cout<<"\n";
    bool check = true;
    for (int i=0;i<n-1;i++){
        if (v2[i+1]<v2[i]){
            check = false;
            break;
        }
    }
    if (check){
        if (temp==0)cout<<0<<"\n";
        else{
            cout<<temp<<"\n";
            for (auto d:p){
                cout<<d[0]<<" "<<d[1]<<"\n";
            }
        }
    }
    else {
        cout<<-1<<"\n";
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