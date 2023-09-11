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

ll lol(ll a){
    ll i=1, ans=0, a1=pow(2,a-1);
    ll a2=a1;
    // cout<<"a: "<<a<<" a1: "<<a1<<"\n";
    while (a1){
        ans+=i*pow(a1,2);
        a1/=2;
        i*=2;
    }
    return ans;
}

void solve(){
    ll a, check=0;
    cin>>a;
    ll i = 1;
    // cout<<lol(1)<<" "<<lol(2)<<"\n";
    
    while (check+(lol(i))<=a){
        // cout<<check<<" "<<lol(i)<<"\n";
        check+=lol(i);
        i++;
    }
    cout<<i-1<<"\n";
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