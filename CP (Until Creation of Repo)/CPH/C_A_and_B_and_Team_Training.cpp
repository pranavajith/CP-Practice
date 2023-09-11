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
    ll n,m;
    cin>>n>>m;
        ll sol = -1, i = 0;
        while (i<=n){
            if ((m-2*i) >= 0)sol = max (sol, i + min(m-2*i,(n-i)/2));
            // cout<<i<<" "<<i + min(m-2*i,n-i)<<"\n";
            i++;
        }
    cout<<sol<<"\n";
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