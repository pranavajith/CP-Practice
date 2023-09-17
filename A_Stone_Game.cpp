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
    ll n, minel = INT_MIN, minind, maxel = INT_MAX, maxind;
    cin>>n;
    // vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (i==0){
            minel = a;
            maxel = a;
            minind = 0;
            maxind = 0;
        }
        else{
            if (a>maxel){
                maxel = a;
                maxind = i;
            }
            if (a<minel){
                minel = a;
                minind = i;
            }
        }
    }
    // cout<<minind<<" "<<maxind<<" ";
    // if (minind <= n/2 && maxind <= n/2)cout<<max(minind+1, maxind+1)<<"\n";
    // else if (minind >= n/2 && maxind >= n/2)cout<<max(n-minind, n-maxind)<<"\n";
    // else{
    //     ll max1 = max(minind, maxind);
    //     ll min1 = min(minind, maxind);
    //     cout<<min1+1+n-max1<<"\n";
    // }
    ll max1 = max(minind, maxind);
    ll min1 = min(minind, maxind);
    if (max1 <n/2){
        cout<<max1+1<<"\n";
    }
    else if (min1 > n/2)cout<<n-min1<<"\n";
    else{
        ll sol=0;
        if (min1 + 1 <= n - max1){
            sol+=min1+1;
            sol+=min(max1-min1, n-max1);
        }
        else{
            sol+=n-max1;
            sol+=min(max1-min1, min1+1);
        }
        cout<<sol<<"\n";
    }
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