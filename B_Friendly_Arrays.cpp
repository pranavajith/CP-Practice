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
    ll n,m,a;
    cin>>n>>m;
    vector <ll> v(n);
    ll xor1 = 0, xor2 = 0, orb = 0;
    for (int i=0; i<n; i++) {
        cin>>v[i];
        xor1 ^= v[i];
    }
    for (int i=0; i<m; i++) {
        cin>>a;
        orb |= a;
    }
    for (int i=0; i<n; i++) {
        xor2 ^= (v[i] | orb);
    }
    if (n%2==0)
    cout<<xor2<<" "<<xor1<<"\n";
    else cout<<xor1<<" "<<xor2<<"\n";
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