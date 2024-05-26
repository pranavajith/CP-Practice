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
    ll n,m;
    cin>>n>>m;
    vector <pair <ll,ll> > v;
    for (int i=0; i<m; i++){
        ll a,b;
        cin>>a>>b;
        v.push_back(make_pair(b,a));
    }
    sort(v.rbegin(), v.rend());
    ll ptr = 0, ans = 0;
    while (ptr < m && n){
        if (v[ptr].second <= n) {
            ans += v[ptr].second * v[ptr].first;
            n -= v[ptr].second;
        }
        else{
            ans += n * v[ptr].first;
            n = 0;
        }
        ptr++;
    }
    cout<<ans<<"\n";

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