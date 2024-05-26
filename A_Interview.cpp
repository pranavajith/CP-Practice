#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    // vector <ll> v(n);
    // vector <ll> v1(n);
    ll a = 0, b = 0;
    for (int i=0; i<n; i++) {
        ll c; cin>>c; a |= c;
    }
    for (int i=0; i<n; i++) {
        ll c; cin>>c; b |= c;
    }
    cout<<a+b<<"\n";
    // for (int i=0; i<n; i++) cin>>v1[i]; 
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