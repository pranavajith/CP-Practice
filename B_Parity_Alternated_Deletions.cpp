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
    vector <ll> v(n);
    // multiset <ll> even, odd;
    priority_queue <ll> even, odd;
    for (int i=0; i<n; i++) {
        cin>>v[i];
        if (v[i] % 2) odd.push(v[i]);
        else even.push(v[i]);
    }
    ll sum1 = accumulate(v.begin(), v.end(), 0LL), toRemove = 0;
    while (!even.empty() && !odd.empty()) {
        toRemove += even.top() + odd.top(); even.pop(); odd.pop();
    }
    if (even.empty() && odd.empty()){
        cout<<0<<"\n";
        return;
    }
    if (even.empty()) {
        toRemove += odd.top();
    }
    else toRemove += even.top();
    cout<<sum1 - toRemove<<"\n";
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