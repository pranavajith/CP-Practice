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
    ll a,b,c;
    cin>>a>>b>>c;
    ll max1 = max(max(a,b),c);
    ll min1 = min(min(a,b),c);
    ll mid = (a+b+c)-min1-max1;
    // ll sol = 0;
    if (max1 >= min1+mid)cout<<min1+mid<<"\n";
    else cout<<(max1+mid+min1)/2<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}