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
    for (int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.rbegin(), v.rend());
    if (count(v.begin(), v.end(), v[0]) == n) cout<<"NO\n";
    else {
        // reverse(v.begin(), v.end());
        ll top = v.back(); v.pop_back();
        reverse(v.begin(), v.end());
        v.push_back(top);
        reverse(v.begin(), v.end());
        cout<<"YES\n";
        for (int i=0; i<n; i++) cout<<v[i]<<" "; cout<<"\n";
    }
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