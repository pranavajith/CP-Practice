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
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    while (!v.empty()){
        if (v.back() < 0) {
            cout<<v.back()<<"\n";
            return;
        }
        ll a = sqrt(v.back());
        if (a * a != v.back()) {
            cout<<v.back()<<"\n";
            return;
        }
        v.pop_back();
    }
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