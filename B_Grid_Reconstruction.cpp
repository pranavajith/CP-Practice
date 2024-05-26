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
    ll n; cin>>n;
    vector <vector <ll> > v(2, vector <ll> (n));
    v[0][0] = 2*n-1, v[1][n-1] = 2*n;
    for (int i=1; i<n; i++){
        if (i%2){
            v[0][i] = i+1;
            v[1][i-1] = i;
        }
        else {
            v[0][i] = n + (i);
            v[1][i-1] = n + (i) - 1;
        }
    }
    for (auto d:v){
        for (auto e:d) cout<<e<<" "; cout<<"\n";
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