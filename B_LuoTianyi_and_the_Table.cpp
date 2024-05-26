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
    ll n,m;
    cin>>n>>m;
    vector <ll> v(m*n);
    for (int i=0; i<n*m; i++) cin>>v[i]; 
    sort(v.begin(), v.end());
    if (n>m) swap(n,m);
    ll N = n*m;
    ll max1 = v[N-1] - v[0], max2 = max(v[N-1] - v[1], v[N-2] - v[0]);
    cout<<max1 * (N-n) + max2 * (n-1)<<"\n";
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