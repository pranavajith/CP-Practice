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
    ll x,y,n;
    cin>>x>>y>>n;
    ll nsum2 = (n-1)*(n)/2;
    if (y-nsum2 < x)cout<<-1<<"\n";
    else{
        vector<ll>v(n+1);
        v[n]=y;
        v[1]=x;
        for (int i=2;i<=n-1;i++){
            v[n-i+1]=v[n-i+2]-(i-1);
            // cout<<v[n-i+3]<<" ";
        }
        for (int i=1;i<=n;i++)cout<<v[i]<<" ";
        cout<<"\n";
    }
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