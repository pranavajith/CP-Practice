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
    ll tot = 0, extra = 0;
    for (int i=0; i<n; i++) {
        cin>>v[i];
        tot += v[i];
    }
    for (int i=0; i<n; i++) {
        if (v[i] < tot/n) {
            if (extra < tot/n - v[i]){
                cout<<"NO\n";
                return;
            }
            extra -= (tot/n - v[i]);
        }
        else extra += (v[i] - tot/n);
    }
    cout<<"YES\n";
    return;
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