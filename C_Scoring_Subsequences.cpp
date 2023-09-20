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
    ll n, maxel=INT_MIN;
    cin>>n;
    vector <ll> v, sol;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    
    for (int i=0;i<n;i++){
        int l = 1, r = i+1;
        while (l<=r){
            ll mid = (l+r)/2;
            if (v[i-mid+1]>=mid)l=mid+1;
            else r=mid-1;
        }
        cout<<r<<" ";
    }
    cout<<"\n";


    // for (int i=0;i<n;i++){
    //     cout<<sol[i]<<" ";
    // }
    // cout<<"\n";
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