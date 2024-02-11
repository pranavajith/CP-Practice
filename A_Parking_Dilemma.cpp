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
    ll k;
    cin>>k;
    sort(v.begin(), v.end());
    ll mindist = LLONG_MAX;
    ll l = 0, r = k-1;
    while (r<n){
        // cout<<v[k] - v[l] + 1<<"\n";
        mindist = min(mindist, v[r] - v[l] + 1); r++; l++;
    }
    cout<<mindist<<"\n";

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