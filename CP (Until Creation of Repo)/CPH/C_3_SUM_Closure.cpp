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
    ll n, count0=0, countneg = 0, countpos = 0;
    cin>>n;
    vector <ll> v;
    bool flag = true;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a>0)countpos++;
        else if (a<0)countneg++;
        else count0++;

        if (countpos > 2 || countneg > 2){
            flag = false;
            // break;
            continue;
        }
        if (count0>2 && a==0)continue;
        v.push_back(a);
    }
    // for (auto d:v){
    //     cout<<d<<" ";
    // }
    if (!flag)cout<<"NO\n";
    else{
        for (int i=0;i<v.size();i++){
            for (int j=i+1;j<v.size();j++){
                for (int k=j+1;k<v.size();k++){
                    bool check = false;
                   for (int l=0;l<v.size();l++){
                    if ((v[i]+ v[j] + v[k]) == v[l] )check = true;
                   }
                   if (!check){
                    cout<<"NO\n";
                    return;
                   }
                }
            }
        }
        cout<<"YES\n";
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