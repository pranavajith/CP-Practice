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
    ll n, a = 1;
    cin>>n;
    vector <ll> v, v1;
    for (int i=0;i<n;i++){
        ll b;
        cin>>b;
        a*=b;
        v.push_back(b);
        v1.push_back(a);
    }
    ll l=0,r=n;
    for (int i=0;i<n;i++){
        if (v[i]!=1)break;
        l++;
    }

    for (int i=n-1;i>=0;i--){
        if (v[i]!=1)break;
        r--;
    }
    // cout<<l<<" "<<r<<"\n";
    // if (l==0)l++;
    int w = accumulate(v.begin(),v.end(),0);
    if (w>=v1[n-1]){
        cout<<1<<" "<<1<<"\n";
    }
    else{
        if (l==0){
            // if (r==n){
                cout<<1<<" "<<r<<"\n";
            // }
            // else{
            //     cout<<1<<" "
            // }
        }
        else{
            cout<<l+1<<" "<<r<<"\n";
        }
    }
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