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
    vector <pair <ll,ll> > v;
    for (int i=0; i<n; i++){
        ll a;
        cin>>a;
        v.push_back(make_pair(a,i+1));
    }
    sort(v.rbegin(), v.rend());
    // vector <ll> ans(n);
    ll fin = 1;
    for (int i=1; i<n; i++){
        // ans[v[i].second] = i+1;
        fin += (i)*v[i].first + 1;
    }
    cout<<fin<<"\n";
    // for (auto d:v) cout<<d.second<<" ";
    for (auto d:v) cout<<d.second<<" ";
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