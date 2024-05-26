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
    map <ll,ll> m;
    ll maxOcc = 1;
    for (int i=0; i<n; i++){
        ll a;
        cin>>a;
        m[a]++;
        maxOcc = max(maxOcc, m[a]);
    }
    ll numTimes = 0;
    while (maxOcc < n) {
        numTimes += min(maxOcc, n - maxOcc) + 1;
        maxOcc *= 2;
    }
    cout<<numTimes<<"\n";
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