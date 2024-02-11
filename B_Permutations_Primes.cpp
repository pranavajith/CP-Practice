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
    if (n==1) cout<<1<<"\n";
    else if (n==2) cout<<1<<" "<<2<<"\n";
    else{
    vector <ll> v(n,0);
    v[0] = 2, v[(n)/2] = 1, v[n-1] = 3;
    ll check = 4;
    for (int i=0; i<n; i++) {
        if (v[i] == 0) v[i] = check++;
    }
    for (auto d:v) cout<<d<<" "; cout<<"\n";
}
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