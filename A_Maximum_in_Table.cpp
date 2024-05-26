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
    ll n;
    cin>>n;
    vector <vector <ll> > v(n, vector <ll> (n, 1));
    for (int i = 1; i<n; i++) {
        for (int j=1; j<n; j++) {
            v[i][j] = v[i-1][j] + v[i][j-1];
        }
    }
    cout<<v[n-1][n-1]<<"\n";
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