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
    ll n,m,a;
    cin>>n>>m;
    vector <ll> prev(n), next(n), painterind(m);
    map <ll,ll> tobepainted, painter;
    for (int i=0; i<n; i++) cin>>prev[i];
    for (int i=0; i<n; i++) cin>>next[i];
    for (int i=0; i<m; i++){
        cin>>a; painter[a]++;
        painterind[i] = a;
    }
    if (count(next.begin(), next.end(),painterind[m-1])==0){
        cout<<"NO\n";
        return;
    }   
    ll ind = find(next.begin(), next.end(), painterind[m-1]) - next.begin() + 1;
    for (int i=0; i<n; i++) {
        if (prev[i] != next[i]){
            tobepainted[next[i]]++;
        }
    }
    if (tobepainted.size()==0) {
        cout<<"YES\n";
        for (int i=0; i<m; i++) cout<<ind<<" "; cout<<"\n";
        return;
    }
    for (auto d:tobepainted){
        if (d.second > painter[d.first]){
            cout<<"NO\n";
            return;
        }
    }
    vector <ll> ans(m,-1);
    vector < vector <ll> > newloc(n+1);
    for (int i=0; i<n; i++){
        if (prev[i] != next[i]) {
            newloc[next[i]].push_back(i+1);
        }
    }
    for (int i=0; i<m; i++){
        if (newloc[painterind[i]].size()) {
            ll temp = newloc[painterind[i]].back();
            ans[i] = temp;
            newloc[painterind[i]].pop_back();
        }
    }
    if (ans[m-1] != -1) {
        for (int i=0; i<m; i++){
            if (ans[i] == -1) ans[i] = ans[m-1];
        }
    }
    else {
        for (int i=0; i<m; i++){
            if (ans[i] == -1) ans[i] = ind;
        }
    }
    cout<<"YES\n";
    for (int i=0; i<m; i++) {
        // if (ans[i] == -1) cout<<<<" ";
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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