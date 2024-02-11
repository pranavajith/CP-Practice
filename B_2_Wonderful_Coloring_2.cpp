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

map <ll, vector <ll> > m;

void solve(){
    m.clear();
    ll n,k,a;
    cin>>n>>k;
    // vector <ll> v(n);
    for (ll i=0; i<n; i++){
        cin>>a;
        m[a].push_back(i);
    }
    vector <ll> ans(n,0);
    vector <ll> tobefilled;
    for (auto &d:m){
        // cout<<d.first<<" : ";
        if (d.second.size() > k){
            for (ll i=1; i<=k; i++){
                ans[d.second.back()] = i;
                d.second.pop_back();
            }
        }
        else {
            for (ll i=0; i<d.second.size(); i++) {
                tobefilled.push_back(d.second[i]);
                // cout<<d.second[i]<<" ";
            }
        }
        // cout<<"\n";
    }
    // for (auto d: tobefilled) cout<<d<<" "; cout<<"\n\n\n";
    for (ll i=0; i<((tobefilled.size())/k)*k; i++){
        ans[tobefilled[i]] = ((i)%(k))+1;
    }
    // if (n!=200000) {
        for (ll i=0; i<n; i++) cout<<ans[i]<<" "; cout<<"\n";
    // }
    // else {
    //     // if (k)
    //     for (int i=0; i<200000; i++) cout<<1<<" "; cout<<"\n";
    // }
    // map <char,ll> m;
    // ll n,k,a; cin>>n>>k;
    // vector <ll> v(n);
    // // string s; cin>>s;
    // // ll n; n=s.size();
    
    // for (int i=0; i<n; i++){
    //     cin>>a;
    //     v[i] = a;
    //     m[a]++;
    // }
    // ll countsingle = 0, ans = 0;
    // // vector <ll> v
    // for (auto d:m){
    //     if (d.second<k) countsingle+=d.second;
    //     else ans++;
    // }
    // ans+=countsingle/k;
    // cout<<ans<<"\n";
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