#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);
// vector <vector <ll> > v1(INT_MAX)

void solve(){
    ll n,k;
    cin>>n>>k;
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    // for (auto d:v)cout<<d<<" ";cout<<"\n";
    vector <int> max2_step(k), max_step(k), last(k,-1);
    for (int i=0;i<n;i++){
        ll step = i - last[v[i]-1];
        if (step > max_step[v[i]-1]){
            max2_step[v[i]-1] = max_step[v[i]-1];
            max_step[v[i]-1] = step;
        }
        else if (step > max2_step[v[i]-1]){
            max2_step[v[i]-1] = step;
        }
        last[v[i]-1]=i;
    }
    for (int i=0;i<k;i++){
        int step = n - last[i];
        if (step > max_step[i]){
            max2_step[i] = max_step[i];
            max_step[i] = step;
        }
        else if (step > max2_step[i]){
            max2_step[i] = step;
        }
    }
    int ans = 1e9;
    for (int i=0;i<k;i++){
        ans = min(ans, max((max_step[i]+1)/2, max2_step[i]));
    }
    cout<<ans-1<<"\n";
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    // cout<<t;
    while(t--){
        solve();
    }
    return 0;
}