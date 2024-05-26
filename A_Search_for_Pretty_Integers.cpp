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
    ll n,m;
    cin>>n>>m;
    vector <ll> v1(n), v2(m);
    for (int i=0; i<n; i++) cin>>v1[i];
    for (int i=0; i<m; i++) cin>>v2[i];
    // vector <ll> overLap;
    ll check = 10;
    for (int i=0; i<n; i++){
        if (count(v2.begin(), v2.end(), v1[i])) check = min(check, v1[i]);
    }
    if (check != 10) {
        cout<<check<<"\n";
        return;
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    cout<<min(v1[0], v2[0])<<max(v1[0], v2[0])<<"\n";
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