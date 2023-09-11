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
    ll n, count1=0;
    cin>>n;
    vector<ll> v(n+1);
    for (int i=1;i<=n;i++)cin>>v[i];
    for (int i=1;i<=n;i++){
        for (int j=i+1;i+j<=2*n;j++){
            if (v[i]*v[j]==i+j)count1++;
        }
    }
    cout<<count1<<"\n";
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