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

ll gcd(ll a,ll b){
    if (b==0)return a;
    return gcd(b, a%b);
}

void solve(){
    ll n, minel = INT_MAX, pos;
    cin>>n;
    vector <ll> v, v1;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
        if (minel>a){
            minel = a;
            pos = i;
        }
    }
    // ll ind = find(v.begin(),v.end(),minel) - v.begin();
    cout<<n-1<<"\n";
    for (int i=0;i<n;i++){
        if (i==pos)continue;
        cout<<pos+1<<" "<<i+1<<" "<<minel<<" "<<minel + abs(pos-i)<<"\n";
        // if (gcd(v[i+1],v[i])!=1){
        //     // cout<<i+1<<" "<<i+2<<" "<<min(v[i+1],v[i])<<" "<<min(v[i+1],v[i])+1<<"\n";
        //     v1.push_back(i+1);
        //     v1.push_back(i+2);
        //     if (i==0){
        //     v1.push_back(min(v[i+1],v[i]));
        //     v1.push_back(min(v[i+1],v[i]) + 1);
        //     v[i]=min(v[i+1],v[i]);
        //     v[i+1]=min(v[i+1],v[i])+1;
        //     }
        //     else{
        //         if (gcd(v[i-1],min(v[i+1],v[i]))!=1){
        //             v1.push_back(min(v[i+1],v[i]));
        //             v1.push_back(min(v[i+1],v[i])+1);
        //             v[i]=min(v[i+1],v[i])-1;
        //             v[i+1]=min(v[i+1],v[i]);
        //         }
        //     }
        // }
        
    }
//     cout<<v1.size()/4<<"\n";
//     for (int i=0;i<v1.size();i++){
//         cout<<v1[i]<<" ";
//         if (((i+1) % 4 )== 0)cout<<"\n";
//     }
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