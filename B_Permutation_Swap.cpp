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

ll gcd(ll a, ll b){
    if (b==0)return a;
    return gcd(b, a%b);
}

void solve(){
    ll n; cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++){
        cin>>v[i];
    }
    ll ans = abs(v[0] - 1);
    for (int i=1; i<n; i++){
        if (v[i] != i+1) ans = gcd(ans, abs(v[i] - (i+1)));
    }
    cout<<ans<<"\n";
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