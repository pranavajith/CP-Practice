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
    ll n,a;
    cin>>n;
    set < pair <ll,ll> > s;
    for (int i=0; i<n; i++){
        cin>>a;
        if (a!=0) s.insert(make_pair(a, i+1));
    }
    vector < pair <ll,ll> > v;
    ll ans = 0;
    while (s.size() > 1){
        pair <ll,ll> p1, p2;
        auto it1 = s.end(); it1--; p1 = *it1; s.erase(it1);
        auto it2 = s.end(); it2--; p2 = *it2; s.erase(it2);
        v.push_back(make_pair(p1.second, p2.second));
        p1.first--; p2.first--;
        if (p1.first != 0) s.insert(p1); 
        if (p2.first != 0) s.insert(p2);
    }
    cout<<v.size()<<"\n";
    for (int i=0; i<v.size(); i++) cout<<v[i].first<<" "<<v[i].second<<"\n";
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