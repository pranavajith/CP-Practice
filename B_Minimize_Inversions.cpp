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
    vector <ll> v1(n), v2(n);
    for (int i=0; i<n; i++) cin>>v1[i];
    for (int i=0; i<n; i++) cin>>v2[i];
    vector <vector <int> > v(n, vector <int> (3));
    for (int i=0; i<n; i++) {
        v[i][0] = v1[i] + v2[i];
        v[i][1] = v1[i];
        v[i][2] = v2[i];
    }
    sort(v.begin(), v.end());
    for (int i=0; i<n; i++) cout<<v[i][1]<<" "; cout<<"\n";
    for (int i=0; i<n; i++) cout<<v[i][2]<<" "; cout<<"\n";
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