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
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll l = -1,r=n, maxsum = 0, suml=0, sumr=0;
    while (l!=r){
        // cout<<suml<<" "<<sumr<<"\n";
        if (suml==sumr){
            maxsum = max(maxsum, suml);
            l++;
            suml+=v[l];
        }
        else if (suml>sumr){
            r--;
            sumr+=v[r];
            // cout<<v[l]<<" ";
        }
        else{
            l++;
            suml+=v[l];
        }
    }
    cout<<maxsum<<"\n";
}

int main() 
{
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}