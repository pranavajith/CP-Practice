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
    ll n,k, sol = 0;
    cin>>n>>k;
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    ll a=0, b=0, curw = 0;
    while (b!=n){
        while (b!=n && curw + v[b] <= k){
            curw+=v[b++];
        }
        sol = max(sol, b-a);
        curw-=v[a++];
    }
    cout<<sol<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}