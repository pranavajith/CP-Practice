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
    ll n,d;
    cin>>n>>d;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i]; 
    ll ans = 2;
    for (int i=0; i<n-1; i++){
        if (v[i+1] - v[i] > 2*d) ans+=2;
        else if (v[i+1] - v[i] == 2*d) ans++;
    }
    cout<<ans<<"\n";
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