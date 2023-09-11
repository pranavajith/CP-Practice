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
    ll n,m;
    cin>>n>>m;
    map <ll,ll> m1;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        m1[a%m]++;
    }
    ll ans = 0;
    for (auto i:m1){
        if (i.first == 0){
            ans++;
        }
        else if (i.first * 2 == m){
            ans ++;
        }
        else if (i.first * 2 < m || m1[m-i.first]==0){
            int x = i.second;
            int y =m1[m-i.first];
            ans+=1+max(0,abs(x-y)-1);
        }
    }
    cout<<ans<<"\n";
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