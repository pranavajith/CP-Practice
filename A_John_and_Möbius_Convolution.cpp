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
    vector <ll> a(n), b(n);
    map <ll,ll> a1, b1;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        a1[a[i]]++;
    }
    for (int i=0; i<n; i++) {
        cin>>b[i];
        b1[b[i]]++;
    }
    ll ans = 0;
    for (auto d:a1){
        for (auto e:b1){
            ans += d.first*d.second*e.first*e.second;
        }
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