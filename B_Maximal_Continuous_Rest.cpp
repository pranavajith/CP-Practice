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
    deque <ll> d;
    for (int i=0; i<n; i++) {
        ll a;
        cin>>a;
        d.push_back(a);
    }
    int cnt = 0;
    while (!d.empty() && d.front() == 1) {
        cnt++; d.pop_front();
    }
    while (!d.empty() && d.back() == 1) {
        cnt++; d.pop_back();
    }
    ll curcnt = 0;
    while (d.size()) {
        if (d.back() == 1) {
            curcnt++;
        }

        else {
            cnt = max((ll)cnt, (ll)curcnt);
            curcnt = 0;
        }
        cnt = max((ll)cnt, (ll)curcnt);
        d.pop_back();
    }
    cout<< cnt;
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