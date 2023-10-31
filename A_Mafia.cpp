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
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++)cin>>v[i];
    ll sum1 = accumulate(v.begin(), v.end(), 0LL);
    ll max1 = *max_element(v.begin(), v.end());
    ll ans1;
    if (sum1 % (n-1) == 0) ans1 = sum1 / (n-1);
    else ans1 = sum1 / (n-1) + 1;
    cout<<max(ans1, max1);
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