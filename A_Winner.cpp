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
    ll n, curmax = -1;
    string s1;
    cin>>n;
    map <string, ll> m, m1;
    vector <pair <string, ll> > v;
    for (int i=0;i<n;i++){
        ll a; string s;
        cin>>s>>a;
        v.push_back(make_pair(s,a));
        m[s]+=a;
    }
    for (auto d:m){
        if (d.second > curmax){
            curmax = d.second;
        }
    }
    for (int i=0;i<n;i++){
        m1[v[i].first]+=v[i].second;
        if (m1[v[i].first] >= curmax && m[v[i].first] == curmax){
            cout<<v[i].first<<"\n";
            return;
        }
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