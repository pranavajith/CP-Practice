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
    ll n, sol=0;
    cin>>n;
    vector <ll> v, lsum, rsum;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        // sum1+=a;
        v.push_back(a);
        // if (i!=n-1)lsum.push_back(sum1);
    }
    // for (int i=n-1;i>0;i--){
    //     sum2+=v[i];
    //     rsum.push_back(sum2);
    // }
    // int maxsum = 0;
    // for (int i=0;i<lsum.size()-1;i++){
    //     ll id = find(rsum.begin(),rsum.end(),lsum[i]) - rsum.begin();
    //     if (id!=rsum.size()){
    //         // cout<<id-rsum.begin()<<"\n";
    //         maxsum = max(maxsum, int(id+i+2));
    //     }
    // }
    // cout<<maxsum<<"\n";
    ll a=0, asum=v[a], b=v.size()-1, bsum=v[b];
    while (a<b){
        if (asum == bsum){
            sol = max(sol, a+n-b+1);
        }
        if (asum<=bsum){
            a++;
            asum+=v[a];
        }
        else{
            b--;
            bsum+=v[b];
        }
    }
    cout<<sol<<"\n";
}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}