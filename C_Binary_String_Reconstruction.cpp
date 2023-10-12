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
    string s; ll x;
    cin>>s>>x; ll n = s.size();
    vector <ll> v(n, -1);
    for (int i=0; i<n;i++){
        if (s[i]=='0'){
            // cout<<i<<" "<<x<<"\n";
            if (i>=x)v[i-x]=0;
            if (i+x < n)v[i+x]=0;
        }
    }
    for (int i=0; i<n; i++){
        if (s[i]=='1'){
            if ((i<x || v[i-x]==0) && (i+x>=n || v[i+x]==0)){
                cout<<-1<<"\n";
                return;
            }
        }
    }
    for (int i=0;i<n;i++){
        if (v[i]==0)cout<<0;
        else cout<<1;
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