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
    ll n,m;
    cin>>n>>m;
    vector <ll> v(n);
    for (int i=0; i<n; i++)cin>>v[i];
    sort(v.begin(), v.end());
    ll cursum=0;
    vector <ll> kplace (m, 0);
    for (int i=0; i<n; i++){
        kplace[i%m]+=v[i];
        cursum+=kplace[i%m];
        cout<<cursum<<" ";
    }
    cout<<"\n";

    // ll countk = 0, multiplier = 1, cursum = 0;

    // ll a = 0, b = 0;
    // while (a<n && b<n){
    //     if (b-a < m){
    //         cursum+=v[b++];
    //         cout<<cursum<<" ";
    //     }
    //     else{
    //         cursum+=v[b++]+v[a++];
    //         cout<<cursum<<" ";
    //     }
    // }
    // cout<<"\n";

    // for (int i=0; i<n; i++){
    //     countk++;
    //     if (countk>m){
    //         countk=1;
    //         multiplier++;
    //     }
    //     if (i==0){
    //         sol.push_back(v[0]);
    //         cout<<v[0]<<" ";
    //     }
    //     else{
    //         sol.push_back(sol.back() + v[i]*multiplier);
    //         cout<<sol.back()<<" ";
    //     }
    // }
    // cout<<"\n";
    
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