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
    vector <ll> v1, v2, v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    v2.push_back(LLONG_MAX);
    ll ans = 0;
    for (int i=0; i<n; i++) {
        if (i==0) v1.push_back(v[i]);
        else {
            if (v[i] <= v1.back() && v[i] <= v2.back()) {
                if (v1.back() < v2.back()) v1.push_back(v[i]);
                else v2.push_back(v[i]);
            }
            else {
                if (v[i] <= v1.back()) v1.push_back(v[i]);
                else if (v[i] <= v2.back()) v2.push_back(v[i]);
                else {
                    if (v1.back() < v2.back()) v1.push_back(v[i]);
                    else v2.push_back(v[i]);
                    ans++;
                }
            }
        }
    }
    cout<<ans<<"\n";
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