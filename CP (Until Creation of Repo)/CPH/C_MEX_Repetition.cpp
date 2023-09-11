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
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll mex;
    // if (n==1)cout<<v[0]<<"\n";
    // else{
    vector <ll> v2(n+1,1);
    for (int i=0;i<n;i++){
        v2[v[i]]=0;
    }
    for (int i=0;i<n+1;i++){
        if (v2[i]==1){
            mex=i;
            break;
        }
    }
    // cout<<mex<<" !\n";
    v.push_back(mex);
    k=(k)%(n+1);
    // k+=1;
    n=v.size();
    for (int i=n-k;i<n;i++){
        cout<<v[i]<<" ";
    }
    for (int i=0;i<n-k-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    // while (k--){
    //     ll fin = v[n-1];
    //     for (int i=0;i<n;i++){
    //         ll temp = v[i];
    //         v[i] = mex;
    //         mex = temp;
    //     }
    //     mex = fin;
    // }
    // for (auto d:v)cout<<d<<" ";cout<<"\n";
    
    // }
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