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


void f(map <ll, vector<pair<ll,ll> > > &adjx, map <ll, vector<pair<ll,ll> > > &adjy, map <pair<ll,ll>, bool> &vis, pair <ll,ll> p){
    if (vis[p]) return;
    vis[p] = true;
    for (auto d:adjx[p.first]) f(adjx, adjy, vis, d);
    for (auto d:adjy[p.second]) f(adjx, adjy, vis, d);
}

void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll> > v;
    map <pair<ll,ll>, bool> vis;
    map <ll, vector<pair<ll,ll> > > adjx, adjy;
    for (int i=0; i<n; i++){
        ll a,b;
        cin>>a>>b;
        pair <ll,ll> p; p.first = a; p.second = b;
        v.push_back(p);
        adjx[a].push_back(p);
        adjy[b].push_back(p);
    }
    ll cnt = 0;
    for (auto d:v){
        if (!vis[d]){
            cnt++;
            f(adjx, adjy, vis, d);
        }
    }
    cout<<cnt-1<<"\n";
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