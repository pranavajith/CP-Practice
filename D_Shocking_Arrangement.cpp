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
    if (count(v.begin(), v.end(), 0) == n) {cout<<"No\n"; return;}
    sort(v.begin(), v.end());
    ll sum1 = v[n-1] - v[0];
    ll l = 0, r = n-1;
    vector <ll> ans;
    ll cursum = 0;
    while (l<r){
        while (l<r && cursum + v[r] < sum1) {
            ans.push_back(v[r]); cursum += v[r]; r--;
        }
        cursum += v[l]; ans.push_back(v[l]); l++;
    }
    cout<<"Yes\n";
    for (auto d:ans) cout<<d<<" "; cout<<"\n";
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