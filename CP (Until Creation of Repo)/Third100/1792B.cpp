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
    ll a1,a2,a3,a4, a=0,b=0, count1=0;
    cin>>a1>>a2>>a3>>a4;
    a=a1,b=a1, count1=a1;
    if (a1==0 && (a2!=0 || a3!=0 || a4!=0))cout<<1<<"\n";
    else if (a1==0 && (a2==0 && a3==0 && a4==0))cout<<0<<"\n";
    else{
       cout<<(a1+min(a2,a3)*2 + min(a1+1, abs(a2-a3)+a4))<<"\n";
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