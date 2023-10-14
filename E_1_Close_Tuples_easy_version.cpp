#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    map <ll,ll> m;
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++){
        cin>>v[i];
        m[v[i]]++;
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    // for (auto d:v)cout<<d<<" ";
    n = v.size();
    ll ans = 0;
    for (int i=0; i<v.size(); i++){
        if (m[v[i]] >=3){
            ans+=(m[v[i]] * (m[v[i]]-1) * (m[v[i]]-2))/6;
        }
        if (m[v[i]] >=2 && m[v[i]+1]) {
            ans += m[v[i]]*(m[v[i]]-1)/2 * m[v[i]+1];
        }
        if (m[v[i]+1] >=2 && m[v[i]]) {
            ans += m[v[i]+1]*(m[v[i]+1]-1)/2 * m[v[i]];
        }
        if (m[v[i]] >=2 && m[v[i]+2]) {
            ans += m[v[i]]*(m[v[i]]-1)/2 * m[v[i]+2];
        }
        if (m[v[i]+2] >=2 && m[v[i]]) {
            ans += m[v[i]+2]*(m[v[i]+2]-1)/2 * m[v[i]];
        }
        if (m[v[i]] && m[v[i]+1] && m[v[i]+2]) ans+=m[v[i]]*m[v[i]+1]*m[v[i]+2];
    }
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