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
vector <ll> dp(2e5, 1e9);
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,m,k1,d;
    cin>>n>>m>>k1>>d; d++;
    vector < vector <ll> > v(n, vector <ll> (m));
    for (ll i=0; i<n; i++){
        for (ll j=0; j<m; j++) cin>>v[i][j];
    }
    if (d>=m-1) {
        cout<<2*k1<<"\n";
        return;
    }
    vector <ll> order;
    for (ll i=0; i<n; i++){
        // cout<<"!!! "<<i<<"\n";
        dp[0] = 1;
        multiset <ll> ms;
        for (ll j=1; j<=d; j++){
            dp[j] = v[i][j]+2;
            ms.insert(dp[j]);
        }
        // ll l = 1;
        for (ll j=d+1; j<m; j++){
            // cout<<"for "<<j<<" : "; for (auto d:ms) cout<<d<<" "; cout<<"\n";
            dp[j] = v[i][j]+1+(*ms.begin());
            ms.erase(ms.find(dp[j-d]));
            ms.insert(dp[j]);
            
            

            // for (ll k=1; k<=d+1; k++){
            //     dp[j] = min(dp[j], dp[j-k] + v[i][j]+1);
            // }
        }
        ll ans = 1e9;
        for (ll j=1; j<=d+1; j++){
            ans = min(ans, dp[m-1-j]);
        }
        order.push_back(ans);
        // cout<<i+1<<" : "; for (ll i=0; i<m; i++) cout<<dp[i]<<" "; cout<<"\n";
    }
    // cout<<"\n"; for (auto d:order ) cout<<d<<" "; cout<<"\n";
    ll l = 0, r = 0; ll cursum = 0;
    while (r < k1) {
        cursum += order[r]; r++;
    }
    ll fin = cursum;
    while (r < order.size()){
        cursum += order[r++]; cursum -= order[l++]; fin = min(fin, cursum);
    }
    cout<<fin + 2*k1<<"\n";
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