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
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,m;
    cin>>n>>m;
    ll k;
    cin>>k;
    vector <pair<ll,ll> > fire;
    for (int i=0; i<k; i++){
        pair <ll,ll> p;
        cin>>p.first>>p.second;
        fire.push_back(p);
    }
    // for (auto d:fire)cout<<d.first<<" "<<d.second<<"\n";
    set < vector <ll> > s;
    ll curmin = -1, curx, cury;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            ll mindist = LLONG_MAX;
            for (auto d:fire){
                mindist = min(mindist, abs(i-d.first) + abs(j-d.second));
            }
            if (mindist >= curmin){
                curmin = mindist;
                curx = i;
                cury = j;
            }
        }
    }
    // vector < vector <ll> > v1 (s.begin(), s.end());
    // cout<<v1[v1.size()-1][1]<<" "<<v1[v1.size()-1][2]<<"\n";
    cout<<curx<<" "<<cury<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}