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
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    vector <ll> sol;
    sol.push_back(v[0]);
    for (int i=1;i<n-1;i++){
        if ((v[i]-v[i-1])/abs(v[i]-v[i-1]) != (v[i+1]-v[i])/abs(v[i+1]-v[i])){
            sol.push_back(v[i]);
        }
    }
    sol.push_back(v[n-1]);
    cout<<sol.size()<<"\n";
    for (int i=0;i<sol.size();i++){
        cout<<sol[i]<<" ";
    }
    cout<<"\n";
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