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
    // set <ll> s;
    map <ll,ll> m;
    for (int i=0; i<n; i++){
        ll a; cin>>a; m[a]++;
    }
    // cout<<s.size()<<"\n";
    ll sol = 0, cnt = 0;
    for (auto d:m){
        if (d.second % 2 == 0) cnt++;
        // else cnt++;
    }
    if (cnt%2) cout<<m.size()-1<<"\n";
    else cout<<m.size()<<"\n";
    // cout<<sol<<"\n";
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