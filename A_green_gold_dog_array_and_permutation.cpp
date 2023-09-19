#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector <pair <ll,ll> > v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        pair <ll,ll> p;
        p.first = a;
        p.second = i;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    vector <ll> ans(n);
    for (int i=0;i<n;i++){
        ans[v[i].second]=i+1;
    }
    for (int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    
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