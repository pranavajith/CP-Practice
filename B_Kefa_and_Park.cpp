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


ll f(vector <ll> &dp, vector <ll> &checkForCats, vector <ll> &parent, ll d, bool check){
    if (dp[d]!=-1) return dp[d];
    // if (checkForCats[d] == 1)
    ll a = 0;
    if (checkForCats)
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector <ll> dp(n+1, -1);
    vector <ll> checkForCats(n+1);
    for (int i=1; i<=n; i++) cin>>checkForCats[i];
    dp[1] = checkForCats[1];
    vector <ll> parent(n+1);
    map <ll, bool> m;
    for (int i=0; i<n-1; i++){
        ll a,b;
        cin>>a>>b;
        m[a] = true;
        parent[b] = a;
    }
    vector <ll> restaurants;
    for (int i=1; i<=n; i++) {
        if (!m[i]) restaurants.push_back(i);
    }
    ll ans = 0;
    for (auto d:restaurants){
        ll a = 0;
        if (checkForCats[d]) a = f(dp, checkForCats, parent, d, true);
        else a = f(dp, checkForCats, parent, d, false);
        if (a <= k) ans++;
    }
    cout<<ans<<"\n";
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