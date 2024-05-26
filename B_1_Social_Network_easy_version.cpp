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
    ll n,k; cin>>n>>k;
    queue <ll> q; map <ll, bool> m;
    for (int i=0; i<n; i++){
        ll a; cin>>a;
        if (m[a]) continue;
        m[a] = true;
        if (q.size() == k) {
            m[q.front()] = false;
            q.pop();
        }
        q.push(a);
    } 
    cout<<q.size()<<"\n";
    vector <ll> v;
    while (!q.empty()) {
        v.push_back(q.front()); q.pop();
    }
    reverse(v.begin(), v.end());
    for (auto d:v) cout<<d<<" ";
    cout<<"\n";
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