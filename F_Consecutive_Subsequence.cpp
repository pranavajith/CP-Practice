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
    ll n;
    cin>>n;
    map <ll,ll> m;
    vector <ll> v(n);
    ll ans = 0, lst = v[0];
    for (int i=0; i<n; i++) cin>>v[i];
    for (int i=0; i<n; i++){
        m[v[i]] = m[v[i]-1]+1;
        if (ans<m[v[i]]){
            ans = m[v[i]];
            lst = v[i];
        }
    }
    vector <ll> sol;
    for (int i=n-1; i>=0; i--){
        if (v[i] == lst){
            sol.push_back(i); lst--;
        }
    }
    cout<<ans<<"\n";
    reverse(sol.begin(), sol.end());
    for (auto d:sol) cout<<d+1<<" ";
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