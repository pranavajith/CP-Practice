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
    cin>>n;
    vector <pair <ll,ll> > v;
    pair <ll,ll> p;
    ll mincheck = INT_MAX, sum1 = 0;
    pair <ll,ll> minp; minp.first = INT_MAX; minp.second = INT_MAX;
    for (int i=0; i<n; i++){
        cin>>m;
        vector <ll> temp(m);
        for (int j=0; j<m; j++) cin>>temp[j];
        sort(temp.begin(), temp.end());
        mincheck = min(mincheck, temp[0]);
        p.first = temp[0], p.second = temp[1]; 
        v.push_back(p);
        if (p.second < minp.second ) minp = p;
        sum1+=p.second;
    }   
    // sort(v.begin(), v.end()); 
    // sum1-=v[0].second; sum1+=mincheck;
    // cout<<sum1<<"\n";
    sum1 += mincheck - minp.second;
    cout<<sum1<<"\n";
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