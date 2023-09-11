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
    vector <ll> v, v1;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    v1.push_back(0);
    for (int i=1;i<n;i++){
        v1.push_back(abs(v[i]-v[i-1]));
    }
    sort(v1.begin(),v1.end());
    // for (int i=0;i<v1.size();i++)cout<<v1[i]<<" ";cout<<"\n";
    ll sol = 0;
    for (int i=0;i<n-k+1;i++){
        sol += v1[i];
    }
    cout<<sol<<"\n";
}   

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}