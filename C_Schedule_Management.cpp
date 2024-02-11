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

// vector <ll> v; 
ll n,m,a;
map <ll,ll> m1;

bool check(ll n){
    ll left = 0, helptasks = 0;
    // cout<<"\n\n"<<n<<"\n";
    for (auto d:m1){
        // cout<<d.first<<" : "<<d.second<<"\n";
        if (d.second > n){
            left += d.second - n;
        }
        else {
            helptasks += (n - d.second)/2;
        }
        // cout<<left<<" "<<helptasks<<"\n";
    }
    if (helptasks >= left) return true;
    return false;
}

void solve(){
    cin>>n>>m;
    // v.clear();
    m1.clear();
    for (int i=0; i<m; i++){
        cin>>a;
        // v.push_back(a);
        m1[a]++;
        // cout<<m1[a];
    }
    for (int i=1; i<=n; i++){
        m1[i] = max(0LL, m1[i]);
    }
    ll l = 1, r = 2*m, ans;
    while (l<=r){
        ll mid = (l+r)/2;
        if (check(mid)){
            ans = mid;
            r = mid-1;
        }
        else {
            l = mid+1;
        }
    }
    // for (auto d:m1) cout<<d.first<<" : "<<d.second<<"\n"; cout<<"yay!\n\n";
    // if (check(3))cout<<"ok";
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