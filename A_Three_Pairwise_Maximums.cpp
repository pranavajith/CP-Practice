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
    // ll n;
    // cin>>n;
    // vector <ll> v(n);
    // for (int i=0; i<n; i++) cin>>v[i]; 
    vector <ll> v(3);
    for (int i=0; i<3; i++) cin>>v[i];
    sort(v.begin(), v.end());
    if (v[1] != v[2]) cout<<"NO\n";
    else {
        cout<<"YES\n";
        cout<<v[0]<<" "<<v[0]<<" "<<v[2]<<"\n";
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