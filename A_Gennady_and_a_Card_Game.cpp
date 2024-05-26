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
    // ll n;
    // cin>>n;
    // vector <ll> v(n);
    // for (int i=0; i<n; i++) cin>>v[i]; 
    string a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    map <char, bool> m;
    m[b[0]] = true;
    m[c[0]] = true;
    m[d[0]] = true;
    m[e[0]] = true;
    m[f[0]] = true;
    m[b[1]] = true;
    m[c[1]] = true;
    m[d[1]] = true;
    m[e[1]] = true;
    m[f[1]] = true;
    if (m[a[0]] || m[a[1]]) cout<<"YES\n";
    else cout<<"NO\n";
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