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
    ll t = n;
    // this is the part for addinig 2
    for (int i=0;i<n-1;i++){
        // if (i==0){
            if (i==0)sol.push_back(v[0]);
            else sol.push_back(sol.back()+v[i]);
            ll t = 0;
            while (pow(2,t)<=(n-(i+1)))t++;
            // cout<<"! "<<i+pow(2,t-1)+1<<"\n";
            v[i+pow(2,t-1)]+=v[i];
            // }
        // else{
        //     sol.push_back(v[i]);
        // }
    }
    for (int i=0;i<n-1;i++){
        cout<<sol[i]<<"\n";
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}