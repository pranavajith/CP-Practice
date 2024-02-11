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
    vector <double> v(n), t(n), v2;
    for (int i=0; i<n; i++) cin>>v[i];
    for (int i=0; i<n; i++) cin>>t[i];
    for (int i=0; i<n; i++) {
        v2.push_back(v[i] - t[i]);
        v2.push_back(v[i] + t[i]);
    }
    double d = 0;
    // cout<<accumulate(v2.begin(), v2.end(), d)/(2*n)<<"\n";  
    ll minel = *min_element(v2.begin(), v2.end());
    ll maxel = *max_element(v2.begin(), v2.end());
    ll d1 = minel + maxel;
    cout<<d1/2; if (d1 % 2) cout<<".5"; cout<<"\n";
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