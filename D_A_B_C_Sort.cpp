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
    for (int i=0; i<n; i++) cin>>v[i];
    if (n==1) {
        // cout<<"YES\n"
    }
    if (n%2 && v[0] != *min_element(v.begin(), v.end())){
        cout<<"NO\n";
        return;
    }
    ll curiter = n%2;
    while (curiter < n) {
        if (v[curiter] > v[curiter+1]) swap(v[curiter], v[curiter+1]);
        curiter+=2;
    }
    if (is_sorted(v.begin(), v.end())) cout<<"YES\n";
    else cout<<"NO\n";
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