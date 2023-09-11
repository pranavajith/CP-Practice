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

void solve(){
    ll n;
    ll cpart = 1;
    cin>>n;
    for (int i=n;i>n/2;i--)cpart*=i;
    for (int i=n/2;i>0;i--)cpart/=i;
    cpart/=2;
    ll nby2part = 1;
    for (int i=n/2-1;i>0;i--)nby2part*=i;
    nby2part = nby2part * nby2part;
    cout<< cpart * nby2part<<"\n";
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