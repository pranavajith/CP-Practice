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
    ll n,m,k, ans=0;
    cin>>n>>m>>k;
    vector <ll> v(m);
    for (int i=0;i<m;i++)cin>>v[i];
    ll fedor;
    cin>>fedor;
    for (int i=0;i<m;i++){
        ll x = v[i]^fedor, check = 0;
        // cout<<v[i]<<" "<<fedor<<" "<<x<<"\n";
        for (int i=32;i>=0;i--){
            check+=(x>>i)&1;
        }
        if (check<=k)ans++;
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