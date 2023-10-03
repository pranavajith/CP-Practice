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
    ll n,m,x;
    cin>>n>>m>>x;
    set < pair <ll,ll> > s;
    for (int i=0;i<m;i++){
        s.insert(make_pair(0, i+1));
    }
    // for (auto d:s)cout<<d.first<<" "<<d.second<<"\n";
    cout<<"YES\n";
    for (int i=0;i<n;i++){
        // for (auto d:s)cout<<d.first<<" "<<d.second<<"\n";
        ll a;
        cin>>a;
        pair <ll,ll> p = *s.begin();
        p.first+=a;
        cout<<p.second<<" ";
        s.erase(s.begin());
        s.insert(p);
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