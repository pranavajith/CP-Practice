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

ll dfs(vector <vector <ll> > &adj, ll vertex, ll parent){
    if (adj[vertex].size() == 0) return 0;
    ll ans = 1;
    for (auto d:adj[vertex]){
        if (d==parent) continue;
        ans = max(ans, 1 + dfs(adj, d, vertex));
    }
    return ans;
}

void solve(){
    ll n;
    cin>>n;
    ll cnt = 1;
    map <string, ll> m;
    vector <vector <ll> > adj(300);
    // vector <vector <ll> > vis(n+1, vector <ll> (n+1, 0));
    for (int i=0; i<n; i++){
        string a,b,c;
        cin>>a>>b>>c;
        // a = to_lower(a); c = to_lower(c);
        transform(a.begin(), a.end(), a.begin(), ::tolower); 
        transform(c.begin(), c.end(), c.begin(), ::tolower); 
        if (m[c]==0) m[c] = cnt++;
        if (m[a]==0) m[a] = cnt++;
        adj[m[a]].push_back(m[c]);
        adj[m[c]].push_back(m[a]);
    }
    cout<<dfs(adj, 1, 0)<<"\n";
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