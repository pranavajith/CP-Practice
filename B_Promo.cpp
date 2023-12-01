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
    ll n,q,a,b;
    cin>>n>>q;
    vector <ll> v(n), prefsum(n);
    for (int i=0; i<n; i++) cin>>v[i];
    sort(v.rbegin(), v.rend());
    prefsum[0] = v[0];
    for (int i=1; i<n; i++) prefsum[i] = prefsum[i-1] + v[i];
    // for (auto d:prefsum) cout<<d<<" "; cout<<"\n";
    for (int i=0; i<q; i++){
        cin>>a>>b;
        if (a!=b) cout<<prefsum[a-1]-prefsum[a-b-1]<<"\n";
        else cout<<prefsum[a-1]<<"\n";
    }
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