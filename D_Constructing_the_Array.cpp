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

struct cmp{
    bool operator () ( pair <ll,ll> a, pair <ll,ll> b) const {
        if (a.second - a.first == b.second - b.first) return a.first<b.first;
        return a.second - a.first > b.second - b.first;
    }
};

void solve(){
    ll n;
    cin>>n;
    set <pair <ll,ll>, cmp> s;
    s.insert(make_pair(0,n-1));
    vector <ll> a(n);
    for (ll i=0; i<n; i++){
        pair <ll,ll> cur = *s.begin();
        s.erase(s.begin());
        ll id = (cur.first + cur.second)/2;
        a[id] = i+1;
        if (cur.first < id)s.insert(make_pair(cur.first, id-1));
        if (cur.second > id)s.insert(make_pair(id+1, cur.second));
    }
    for (int i=0; i<n; i++)cout<<a[i]<<" "; 
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