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

bool sort1(pair<ll, ll> p1, pair<ll, ll> p2) {
    if (p1.first == p2.first) {
        return p1.second < p2.second;
    }
    return p1.first > p2.first;
}

void solve(){
    ll n,m,h;
    pair <ll,ll> hero;
    cin>>n>>m>>h;
    vector <pair<ll,ll> > sol;
    // vector <ll> v;
    for (ll i=0;i<n;i++){
        vector <ll> v;
        for (int j=0;j<m;j++){
            ll a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll sum1 = 0, w = 0, points = 0, delay = 0;
        while (w<v.size() && (sum1 + v[w]<=h)){
            sum1+=v[w];
            points++;
            delay += sum1;
            w++;
        }
        // cout<<points<<" "<<delay<<" p d\n";
        pair <ll,ll> p;
        p.first = points;
        p.second = delay;
        sol.push_back(p);
        if (i==0)hero = p;
    }
    sort(sol.begin(),sol.end(),sort1);
    // for (auto d:sol)cout<<d.first<<" "<<d.second<<"\n";
    ll ind = find(sol.begin(),sol.end(),hero)-sol.begin();
    cout<<ind+1<<"\n";
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