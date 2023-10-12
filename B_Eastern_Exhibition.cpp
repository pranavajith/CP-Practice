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

ll sol (vector <ll> x){
    sort(x.begin(), x.end());
    return x[x.size()/2]-x[(x.size()-1)/2]+1;
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> x(n), y(n);
    for (int i=0; i<n; i++)cin>>x[i]>>y[i];
    cout<<sol(x)*sol(y)<<"\n";
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