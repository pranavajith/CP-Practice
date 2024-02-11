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
    ll h, c, t;
    cin>>h>>c>>t;
    if (h + c - 2 * t >= 0) cout<<2<<"\n";
    else {
        ll k = 2 * ((h - t) / (2 * t - c - h)) + 1;
        if ((abs(k / 2 * c + (k + 1) / 2 * h - t * k)) * (k+2) <= (abs((k + 2) / 2 * c + (k + 3) / 2 * h - t * (k + 2))) * k) cout<<k<<"\n";
        else cout<<k+2<<"\n";
    }
}

int main() {
    ll t; cin>>t;
    while (t--) solve();
}