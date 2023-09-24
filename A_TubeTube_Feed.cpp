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
        a+=i;
        v.push_back(a);
    }
    vector <ll> v2;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v2.push_back(a);
    }
   ll reqind = -1, maxent = -1;
   for (int i=0;i<n;i++){
    if (v[i]<=k){
        if (v2[i]>maxent){
            maxent = v2[i];
            reqind = i;
        }
    }
   }
   if (reqind == -1)cout<< -1<<"\n";
   else cout<<reqind+1<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}