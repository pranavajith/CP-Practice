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
    vector < vector <ll> > rocks(n, vector <ll> (m));
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++) cin>>rocks[i][j];
    }
    queue < pair <ll,ll> > q;
    vector < vector <ll> > dist(n, vector <ll> (m, -1));
    dist[0][0] = 0;
    q.push(make_pair(0,0));
    while (!q.empty()){
        // cout<<"ok ";
        ll x = q.front().first, y = q.front().second; q.pop();
        // cout<<x<<" "<<y<<"\n";
        ll d = dist[x][y];
        if (rocks[(x + 1 + d) % n][y]==0 && rocks[(x + 2 + d) % n][y]==0 && dist[(x + 1) % n][y] == -1) {
            dist[(x + 1) % n][y] = d+1;
            q.push(make_pair((x+1)%n, y));
        }
        if (y != m-1 && rocks[(x + 1 + d) % n][y+1]==0 && dist[x][y+1] == -1){
            dist[x][y + 1] = d+1;
            q.push(make_pair(x, (y+1)%m));
        }
    }
    ll ans = 1e9;
    for (ll i=0; i<n; i++){
        if (dist[i][m-1] != -1){
            ans = min(ans, dist[i][m-1] + min(i+1, n-i-1));
        }
    }
    if (ans == 1e9) cout<<-1<<"\n";
    else cout<<ans<<"\n";
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