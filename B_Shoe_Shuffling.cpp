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
    ll n;
    cin>>n;
    map <ll,vector<ll> > m;
    for (int i=0; i<n; i++) {
        ll a; cin>>a;
        m[a].push_back(i+1);
    }
    for (auto d:m) {
        if (d.second.size()==1) {
            cout<<-1<<"\n"; return;
        }
    }
    for (auto d:m) {
        ll a = d.second.size();
        for (int i=1; i<=a; i++) {
            cout<<d.second[i%a]<<" ";
        }
        // cout<<d.first<<" ";
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