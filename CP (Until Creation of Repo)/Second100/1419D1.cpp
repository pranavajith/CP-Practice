#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    ll iter = 0;
    for (int i=1;i<n;i++){
        ll temp = v[i];
        v[i] = v[i-1];
        v[i-1] = temp;
        i++;
    }
    cout<<(n-1)/2<<"\n";
    for (auto d:v)cout<<d<<" ";
    cout<<"\n";
}

int main() 
{
    // lTxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}