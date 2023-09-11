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
    if (n<m)cout<<0<<"\n";
    else if (n< 2*m)cout<<1<<"\n";
    else{
    ll sum1=0,a=0,m1 = m%10;
    // cout<<m1<<"\n";
    for (int i=0;i<10;i++){
        a+=m1;
        if (a>=10)a=a%10;
        sum1+=a;
    }
    // cout<<sum1;
    ll i = 1;
    while (m*i*10<n)i*=10;
    // cout<<i;
    ll m2 = m*i;
    ll sum2 = sum1;
    if (i>1)sum2 = sum1 * i / 10;
    ll sol = sum2 * (n) / (m2);
    // cout<<sol;
    m2 = m2 * (n/m2);
    // cout<<m2;
    for (int i=m2;i<=n;i++){
        if (i%m==0)sol+=i%10;
    }
    cout<<sol<<"\n";
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