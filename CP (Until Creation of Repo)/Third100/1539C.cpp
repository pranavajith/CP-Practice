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
    ll n,k,x;
    cin>>n>>k>>x;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    multiset <ll> m;
    int count1=1, chill=0;
    for (int i=1;i<n;i++){
        if (v[i]-v[i-1]>x){
            count1++;
            m.insert((v[i]-v[i-1]-1)/x);
        }
        // cout<<count1<<"\n";
    }
    for (auto it:m){
        if (it<=k)k-=it, count1--;
    }
    // if (k>=chill){
    //     count1-=chill;
    // }
    // else{
    //     count1-=k;
    // }
    // cout<<max(1,count1)<<"\n";
    cout<<count1<<"\n";

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