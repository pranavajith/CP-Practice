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
    int n, m;
    cin>>n;
    vector <ll> v(n);
    for (auto &x : v) cin >> x;
    sort(v.begin(),v.end());
    ll sum1 = accumulate(v.begin(),v.end(),0LL);
    cin>>m;
    while (m--){

        ll a,b;
        cin>>a>>b;

                int it = lower_bound(v.begin(),v.end(),a)-v.begin();
                // cout<<v[it]<<" "<< sum1 << " ";
                // cout<<sum1 - v[it]<<" yay! "<<a<<" ";
                ll ans = 2e18;
                if (it > 0)ans = min(a - v[it-1] + max(0LL, b - sum1 + v[it-1]), ans);
                if (it < n)ans = min(ans, max(0LL, b - sum1 + v[it]));
                    // sol = a - v[it-1] + max(zer, b - sum1 + v[it-1]);
                    cout<<ans<<"\n";
            
        }
    
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}