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
    ll n,k,d, countright=0;
    cin>>n>>k>>d;
    vector <ll> v(n), vk(k);
    for (int i=0; i<n; i++) {
        cin>>v[i];
        if (v[i] == i+1) countright++;
    }
    for (int i=0; i<k; i++) cin>>vk[i];
    ll ans = 0;
    if (count(v.begin(), v.end(), 0) == n) ans = d/2;
    else ans = countright + (d-1)/2;
    // ans = d/2;
    // cout<<ans<<"!\n";
    for (int i=0; i<min(2*n, d)-1; i++) {
        ll countrighthere = 0;
        for (int j=0; j<vk[i%k]; j++) {
            v[j]++;
        }
        for (int j=0; j<n; j++){
            if (v[j] == j+1) countrighthere++;
        }
        ans = max(ans, countrighthere + (d - (i+2))/2);
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