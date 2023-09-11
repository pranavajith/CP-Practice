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
    ll n;
    cin>>n;
    vector <ll> v, v1;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
        v1.push_back(a);
    }
    sort(v1.begin(),v1.end());
    for (int i=0;i<n;i++){
        if (v[i]!=v1[i]){
            if (v[i]%2 != v1[i]%2){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
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