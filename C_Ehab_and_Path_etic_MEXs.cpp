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
    ll n; cin>>n;
    vector <ll> adj(n+1, 0);
    vector < pair <ll,ll> > v(n-1);
    for (int i=0; i<n-1; i++){
        cin>>v[i].first>>v[i].second;
        adj[v[i].first]++;
        adj[v[i].second]++;
    }
    vector <ll> v1;
    for (int i=1; i<=n; i++){
        if (adj[i] == 1) v1.push_back(i);
    }
    if (v1.size() == 2){
        ll cnt = 0;
        for (int i=0; i<n-1; i++) cout<<(cnt++)<<"\n";
    } 
    else {
        ll a1 = v1[0], a2 = v1[1], a3 = v1[2], cnt = 3;
        for (auto d:v){
            if (d.second == a1 || d.first == a1) cout<<0<<"\n";
            else if (d.second == a2 || d.first == a2) cout<<1<<"\n";
            else if (d.second == a3 || d.first == a3) cout<<2<<"\n";
            else cout<<(cnt++)<<"\n";
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