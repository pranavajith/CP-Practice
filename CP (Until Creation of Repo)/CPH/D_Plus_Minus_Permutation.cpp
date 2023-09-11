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

ll gcd(ll a,ll b){
    if (b==0)return a;
    return gcd(b,a%b);
}

void solve(){
    ll n,x,y, a=0, b=0;
    cin>>n>>x>>y;
    // vector <ll> v1;
    // map<ll,ll> m;
    a=n/x;
    // for (ll j=y;j<=n;j+=y){
    //     if ((j)%x==0)a--;
    //     else b++;
    // }
    // ll a = n/x; 
    b = n/y;
    ll lcm = x*y/gcd(x,y);
    ll c = n/(lcm);
    a-=c;
    b-=c;
    // ll a = count1, b=count2;
    // ll ans1=0,ans2=0;
    ll w = n;
    cout<<w*(w+1)/2 - (w-a)*(w-a+1)/2 - (b)*(b+1)/2<<"\n";
    
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}