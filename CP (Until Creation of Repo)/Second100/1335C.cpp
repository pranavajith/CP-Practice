#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    map <ll,ll> m;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        m[a]++;
    }
    ll total = m.size(), max_cnt = 0;
    for (auto i : m){
       max_cnt = max(max_cnt, i.second); 
    }
    cout<<max(min(total-1,max_cnt),min(total, max_cnt-1))<<"\n";
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