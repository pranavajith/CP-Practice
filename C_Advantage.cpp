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
    ll maxel = *max_element(v.begin(), v.end());
    ll indMax = find(v.begin(), v.end(), maxel) - v.begin();
    ll maxel2 = -1e9;
    for (int i=0; i<n; i++) {
        if (i==indMax) continue;
        maxel2 = max(maxel2, v[i]);
    }
    for (int i=0; i<n; i++){
        if (i==indMax) cout<<maxel - maxel2<<" ";
        else cout<<v[i] - maxel<<" ";
    }
    cout<<"\n";
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