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

// void dfs(ll cur, ll parent, vector <vector <ll> > &adj, vector <ll> &time, vector <ll> &cnt1){
//     for (auto d:adj[cur]){
//         if (d==parent) continue;
//         dfs(d, cur, adj, time, cnt1);
//         time[cur] = max(time[cur], time[d]+1);
//     }
//     cnt1[time[cur]]++;
// }

void solve(){
    ll n,k;
    cin>>n>>k;
    vector <vector <ll> > adj(n+1);
    for (int i=0; i<n-1; i++){
        ll a,b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector <ll> time(n+1, 0), rem(n+1, 0);
    queue <ll> q;
    for (int i=1; i<=n; i++) {
        rem[i] = adj[i].size();
        if (rem[i] <= 1) {
            time[i] = 1;
            q.push(i);
        }
    }
    
    while (!q.empty()) {
        ll t = q.front(); 
        q.pop();
        for (auto d:adj[t]){
            if (rem[d] <= 1) continue;
            rem[d]--;
            if (rem[d] == 1) {
                q.push(d); time[d] = time[t] + 1;
            }
        }
    }
    ll ans = 0;
    for (auto d:time) if (d>k) ans++;
    cout<<ans<<"\n";
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