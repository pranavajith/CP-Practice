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
    ll n,f,a,b;
    cin>>n>>f>>a>>b;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    ll curcharge = f, curtime = 0;
    for (int i=0; i<n; i++) {
        curcharge -= min((v[i] - curtime)*a, b);
        if (curcharge <= 0) {
            cout<<"NO\n";
            return;
        }
        curtime = v[i];
    }
    cout<<"YES\n";
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