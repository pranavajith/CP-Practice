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
    cin>>n;
    set <ll> s;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        s.insert(a);
    }
    vector <ll> v(s.begin(), s.end());
    ll n = v.size();
    ll cent1 = v[0], cent2 = v[1], vent3 = v[2];
    
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