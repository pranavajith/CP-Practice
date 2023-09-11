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
   ll n;
   cin>>n;
   ll i = 1, s=0;
   while (s<n){
    s+=i;
    i++;
   }
   i--;
   if (s==n)cout<<i<<"\n";
   else{
    ll d = s-n;
    if (d==1)cout<<i+1<<"\n";
    else cout<<i<<"\n";
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