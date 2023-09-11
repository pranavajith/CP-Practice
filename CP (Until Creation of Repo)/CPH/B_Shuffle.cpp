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
    ll n,x,m;
    cin>>n>>x>>m;
    ll leftind = x, rightind = x;
    while (m--){
        ll a,b;
        cin>>a>>b;
        if (a<leftind && b>=leftind)leftind = a;
        if (b>rightind && a<=rightind)rightind = b;
    }
    cout<<(rightind - leftind + 1)<<"\n";
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