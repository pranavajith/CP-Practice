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
    sort(v.begin(), v.end());
    set <ll> s;
    for (auto d:v) s.insert(d);
    vector <ll> v1(s.begin(), s.end());
    ll left = 0, right = 0;
    ll possGap = n-1, maxans = 1;
    // for (auto d:v1) cout<<d<<" "; cout<<"\n";
    n = v1.size();
    while (right < n) {
        while (right < n && ((v1[right] - v1[left]) <= possGap)) right++;
        // right--;
        // cout<<right<<" ";
        maxans = max(maxans, right - left);
        left++; 
        // cout<<maxans<<"\n";
    }
    cout<<maxans<<"\n";
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