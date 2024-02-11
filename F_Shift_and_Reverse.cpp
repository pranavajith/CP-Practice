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
    if (is_sorted(v.begin(), v.end())){
        cout<<0<<"\n";
        return;
    }
   reverse(v.begin(), v.end());
   if (is_sorted(v.begin(), v.end())){
        cout<<1<<"\n";
        return;
    }
    reverse(v.begin(), v.end());

    ll ans1 = INT_MAX, ans2 = INT_MAX;
    ll i1 = 0, i2 = 0;
    v.push_back(-1);
    while (i1<n && v[i1] >= v[i1+1]) i1++;
    ans1 = min(n - i1, i1 + 2);
    i1++;
    while (i1<n && v[i1] >= v[i1+1]) i1++;
    // cout<<i1<<" !\n";
    // cout<<ans1<<"\n";
    if (i1 < n || v[0] > v[n-1]) ans1 = INT_MAX;
    // cout<<ans1<<"\n";

    v.pop_back();
    v.push_back(INT_MAX);
    while (i2<n && v[i2] <= v[i2+1]) i2++;
    ans2 = min (n - i2 - 1, i2 + 3);
    i2++;
    while (i2<n && v[i2] <= v[i2+1]) i2++;
    if (i2 < n || v[0] < v[n-1]) ans2 = INT_MAX;
    if (ans1 == INT_MAX && ans2 == INT_MAX) cout<<-1<<"\n";
    else cout<<min(ans1, ans2)<<"\n";
    // cout<<ans1<<" "<<ans2<<"\n";
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