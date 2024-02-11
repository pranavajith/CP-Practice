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

ll dist(ll i, ll j, ll sx, ll sy) {
    return abs(i-sx) + abs(j-sy);
}



void solve(){
    ll n,m,sx,sy,d;
    cin>>n>>m>>sx>>sy>>d;
    sx--, sy--;
    // vector < vector <ll> > v(n, vector <ll> (m, 1));
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<m; j++) {
    //         if (dist(i,j,sx,sy) <= d) v[i][j] = 0;
    //     }
    // }
    // for (auto d:v) {
    //     for (auto e:d){
    //         cout<<e<<" "; 
    //     }
    //     cout<<"\n";
    // }
    if ((sx - d <= 0 && sy - d <= 0) || (sx + d >= n-1 && sy + d >= m-1) ||  (sx-d <= 0 && sx+d>=n-1) || (sy-d <= 0 && sy+d>=m-1)) cout<<-1<<"\n";
    else cout<<n+m-2<<"\n";
    // if (v[n-1][m-1])
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