#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);


void solve(){
    ll n;
    cin>>n;
    ll l = 0, r = 1e9;
    while (l<=r){
        ll mid = l+ (r-l)/2;
        if ((mid+1)*(mid+1)>=n)r=mid-1;
        else l = mid+1;
    }
    cout<<l<<"\n";
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