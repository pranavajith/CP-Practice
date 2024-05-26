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
ll n,m,x;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void f(ll cur, vector <pair <ll,char> > &v, set <ll> &ans, ll ind, vector < vector <ll> > &dp){
    // if (dp[cur][ind]) return;
    // dp[cur][ind] = 1;
    if (ind == m) ans.insert(cur+1);
    else {
        // dp[cur][ind] = 1;
        if (v[ind].second == '0') f((cur+v[ind].first) % n, v, ans, ind+1, dp);
        else if (v[ind].second == '1') f((cur-v[ind].first+n) % n, v, ans, ind+1, dp);
        else {
            f((cur+v[ind].first) % n, v, ans, ind+1, dp);
            f((cur-v[ind].first+n) % n, v, ans, ind+1, dp);
        }
    }
}
void solve(){
    cin>>n>>m>>x;
    vector <pair <ll,char> > v(m);
    vector < vector <ll> > dp(n, vector <ll> (m+1, 0));
    for (int i=0; i<m; i++) cin>>v[i].first>>v[i].second;
    set <ll> ans;
    f(x-1, v, ans, 0, dp);
    // vector <ll> fin;
    // cout<<count(ans.begin(), ans.end(), 1)<<"\n";
    // for (int i=0; i<n; i++){
    //     if (ans[i]) fin.push_back(i+1);
    // }
    // cout<<"\n";
    // sort(ans.begin(), ans.end());
    cout<<ans.size()<<"\n"; for (auto d:ans) cout<<d<<" "; cout<<"\n";
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