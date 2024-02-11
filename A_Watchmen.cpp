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
    ll n, a = 0;
    cin>>n;
    vector <ll> x(n), y(n);
    map < pair <ll,ll>, ll> m;
    map <ll, ll> xmap, ymap;
    for (int i=0; i<n; i++) {
        cin>>x[i]>>y[i];
        xmap[x[i]]++; ymap[y[i]]++;
        // if (m[make_pair(x[i],y[i])]) a++;
        // else m[make_pair(x[i],y[i])] = true;
        m[make_pair(x[i],y[i])]++;
    }
    ll ans = 0;
    for (auto d:xmap){
        ans+=d.second * (d.second - 1) / 2;
    } 
    for (auto d:ymap){
        ans+=d.second * (d.second - 1) / 2;
    } 
    for (auto d:m){
        ans-=d.second * (d.second - 1) / 2;
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