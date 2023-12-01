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
    vector <ll> v(2*n);
    for (int i=0; i<2*n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    vector <pair <ll,ll> > vp; pair <ll,ll> p;
    for (int i=0; i<n; i++){
        p.first = v[i]; p.second = v[n+i];
        vp.push_back(p);
    }
    ll dist = 0;
    for (int i=0; i<n-1; i++){
        dist += vp[i+1].second - vp[i].second + vp[i+1].first - vp[i].first;
    }
    cout<<dist<<"\n";
    for (int i=0; i<n; i++) cout<<vp[i].first<<" "<<vp[i].second<<"\n";
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