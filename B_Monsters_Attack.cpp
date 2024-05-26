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
    ll n,k;
    cin>>n>>k;
    vector <pair<ll,ll> > v(n);
    for (int i=0; i<n; i++) cin>>v[i].second;
    for (int i=0; i<n; i++) {
        cin>>v[i].first;
        v[i].first = abs(v[i].first);
    }
    ll rem = k, decr = 0, iter = 0;
    bool check = false;
    sort(v.begin(), v.end());
    while (iter < n){
        while (iter < n && rem >= v[iter].second) {
            rem -= v[iter].second;
            iter++;
        }
        if (iter == n) break;
        v[iter].second -= rem;
        rem = k;
        decr++;
        if (decr >= v[iter].first) {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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