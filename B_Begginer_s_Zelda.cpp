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
    ll n,a,b;
    cin>>n;
    vector < vector <ll> > v(n+1);
    for (int i=0; i<n-1; i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    vector <ll> vis(n+1, 0);
    vis[1] = 1;
    queue <ll> q;
    q.push(1);
    // map <ll,bool> m;
    ll sol = 0;
    if (v[1].size() == 1) sol++;
    while (!q.empty()){
        ll node = q.front();
        q.pop();
        vis[node] = 1;
        bool check = true;
        for (auto d:v[node]){
            if (vis[d]) continue;
            check = false;
            vis[d] = 1;
            q.push(d);
        }
        if (check) {
            sol++;
            // cout<<node<<" ";
        }
    }
    cout<<sol/2 + sol%2<<"\n";
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