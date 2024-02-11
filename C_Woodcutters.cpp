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

vector <ll> dp(1e5+1, -1);

ll f (ll ind, vector<pair<ll,ll> > &v, ll curpos, ll cnt){
    if (ind == 0) return cnt+1;
    if (dp[ind] != -1) return dp[ind];
    if (v[ind].first + v[ind].second < curpos) return dp[ind] = f(ind-1, v, v[ind].first, cnt+1);
    ll fallLeft = -1e9;
    if (v[ind].first - v[ind].second > v[ind-1].first) fallLeft = f(ind-1, v, v[ind].first - v[ind].second, cnt+1);
    return dp[ind] = max(fallLeft, f(ind-1, v, v[ind].first, cnt));
}

void solve(){
    ll n;
    cin>>n;
    for (int i=0; i<n; i++) dp[i] = -1;
    vector <pair<ll,ll> > v(n);
    for (int i=0; i<n; i++) cin>>v[i].first>>v[i].second;
    vector <ll> dp(n, -1);
    cout<< f(n-1, v, 1e18, 0)<<"\n";
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
