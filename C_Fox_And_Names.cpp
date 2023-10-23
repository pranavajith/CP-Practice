#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <queue>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector <string> v(n);
    vector <ll> deg(26, 0), vst(26, 0);
    vector <vector <ll> > G(26);
    for (int i=0; i<n; i++) cin>>v[i];
    for (int i=0; i<n-1; i++){
        if (v[i].size() > v[i+1].size() && v[i].substr(0, v[i+1].size()) == v[i+1]){
            cout<<"Impossible\n";
            return;
        }
        for (int j=0; j<v[i].size(); j++){
            if (v[i][j] != v[i+1][j]){
                G[v[i][j]-'a'].push_back(v[i+1][j]-'a');
                deg[v[i+1][j]-'a']++;
                break;
            }
        }
    }
    queue<ll> q;
    for (int c=0; c<26; c++){
        if (G[c].size() && deg[c]==0) q.push(c);
    }
    string s;
    while (!q.empty()){
        ll a = q.front(); q.pop();
        vst[a] = 1;
        s+=a+'a';
        for (auto w: G[a]){
            deg[w]--;
            if (deg[w]==0)q.push(w);
        }
    }
    bool ok = false;
    // for (auto x:deg)cout<<x<<" ";
    for (auto x:deg){if (x){
        ok = true;
        break;
    }}
    if (ok){
        cout<<"Impossible\n"; return;
    }
    for (int i=0; i<26; i++){
        if (!vst[i])s+=i+'a';
    }
    cout<<s<<"\n";
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