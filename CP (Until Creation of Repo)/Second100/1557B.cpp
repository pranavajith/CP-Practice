#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,k, count_desc=0;
    cin>>n>>k;
    vector <pair<ll,ll> > v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        pair<ll,ll> p;
        p.first = a;
        p.second = i;
        v.push_back(p);
    }
    ll min_k=1;
    sort(v.begin(),v.end());
    for (int i=1;i<n;i++){
        if (v[i-1].second+1!=v[i].second)min_k++;
    }
    if (min_k<=k)cout<<"Yes\n";
    else cout<<"No\n";
}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}