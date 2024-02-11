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
    ll n, k;
    cin>>n>>k;
    vector <pair<ll,ll> > v;
    ll a;
    for (int i=0; i<n; i++) {
        cin>>a;
        a %= k;
        if (a==0) a=k;
        v.push_back(make_pair(a,n-(i+1)));
    }
    sort(v.rbegin(), v.rend());
    for (auto d:v) cout<<n-d.second<<" "; cout<<"\n";
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