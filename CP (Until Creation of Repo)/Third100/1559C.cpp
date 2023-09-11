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

void solve(){
   ll n;
   cin>>n;
   vector <ll> v(n+1);
   for (int i=1;i<n+1;i++){
    cin>>v[i];
   }
   if (v[1]==1){
    cout<<n+1<<" ";
    for (int i=1;i<n+1;i++){
        cout<<i<<" ";
    }   
    cout<<"\n";
   }
   else if (v[v.size()-1] == 0){
    for (int i=1;i<=n+1;i++){
        cout<<i<<" ";
    }
    cout<<"\n";
   }
   else{
    for (int i=1;i<n;i++){
        if (!v[i] && v[i+1]){
            for (int j=1;j<=i;j++)cout<<j<<" ";
            cout<<n+1<<" ";
            for (int j=i+1;j<=n;j++)cout<<j<<" ";
            cout<<"\n";
            break;
        }
    }
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