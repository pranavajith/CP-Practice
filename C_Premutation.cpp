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
    vector <vector<ll> > v(n, vector<ll> (n-1));
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-1; j++) cin>>v[i][j];
    }
    // for (int i=0; i<n; i++)
    ll reqind = 0;
    if (v[0][0] != v[1][0]) {
        if (v[0][0] == v[2][0]) reqind = 1;
        else reqind = 0;
    }
    else {
        for (int i=2; i<n; i++) {
            if (v[i][0] != v[i-1][0]) {
                reqind = i; break;
            }
        }
        // vector <ll> ans(n);
        
    }
    if (reqind == n-1) cout<<v[0][0]<<" ";
        else cout<<v[n-1][0]<<" ";
        // for (auto d:v[reqind])
        for (int i=0; i<n-1; i++) cout<<v[reqind][i]<<" "; cout<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--){ 
        solve(); }
    return 0;
}