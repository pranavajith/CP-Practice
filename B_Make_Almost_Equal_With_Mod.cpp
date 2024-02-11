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
// map <ll,ll> m1; ll n;
// vector <ll> v;

ll gcd (ll a, ll b) {
    if (b==0) return a;
    return gcd(b, a%b);
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    bool odd = false, even = false;
    ll countnum0 = INT_MAX;
    for (int i=0; i<n; i++) {
        cin>>v[i];
        if (v[i]%2) odd = true;
        else even = true;
        ll check = 0;
        // while (v[i]%10==0){
        //     v[i]/=10;
        //     check++;
        // }
        // countnum0 = min(countnum0, check);
    }
    // if (even && odd) cout<<2<<"\n";
    // else {
    //     ll iter;
    //     if (even) iter = 2;
    //     else iter = 3;
    //     map <ll,ll> m;
    //     while (true) {
    //         m.clear();
    //         for (int i=0; i<n; i++) {
    //            m[v[i]%iter]++;
    //             }
    //             if (m.size()==2) {
    //                 cout<<iter<<"\n";
    //                 return;
    //             }
    //         iter+=2;
    // }
    // }
    // else {
    //     map <ll,ll> m;
    //     for (int i=0; i<n; i++){
    //         m[v[i]%3]++;
    //     }
    //     if (m.size() == 2) cout<<3<<"\n";
    //     else cout<<4<<"\n";
    // }   
    // else {
        sort(v.begin(), v.end());
        // for (auto d:v) cout<<d<<" ";
        ll gcd1 = v[1]-v[0];
        // cout<<gcd1<<" ";
        for (int i=1; i<n-1; i++) {
            gcd1 = gcd(gcd1, v[i+1]-v[i]);
            // cout<<gcd1<<" ";
        }
        cout<<gcd1*2<<"\n"; 
        // map <ll,ll> m;
        // for (int i = 0; i<n; i++){
        //     m[v[i]%(gcd1*2)]++;
        // }
        // cout<<m.size()<<"\n";
    // }
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