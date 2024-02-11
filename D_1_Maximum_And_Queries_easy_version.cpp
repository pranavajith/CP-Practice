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
#define ll long long int
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

ll n,q,a;
vector <ll> v;

bool check (ll mid) {
    ll reqnum = 0;
    // ll indmid, inda;
    // for (int i=50; i>=0; i--){
    //     if ((mid>>i)&1){
    //         indmid = i; break;
    //     }
    // }
    // for (int i=50; i>=0; i--){
    //     if ((a>>i)&1){
    //         inda = i; break;
    //     }
    // }
    // if (indmid < inda) return false;
    
    for (ll i=0; i<n; i++) {
        for (ll j = 30; j>=0; j--) {
            if (((mid>>j)&1) && ((v[i]>>j)&1)==0){
                ll temp = 0, temp2 = 0;
                for (ll k = j-1; k>=0; k--){
                    // if ()
                    if ((v[i]>>k)&1) temp+=(1<<k);
                }
                for (ll k = j; k>=0; k--){
                    if ((mid>>k)&1) temp2+=(1<<k);
                }
                reqnum+=temp2-temp;
                break;
            }
        }
        if (reqnum > a) return false;
    }
    return true;
}


void solve(){
    
    cin>>n>>q;
    for (ll i=0; i<n; i++) {
        cin>>a;
        v.push_back(a);
    }
    // ll a;
    while (q--) {
        cin>>a;
        ll l = 0, r = 1e18, ans;
        while (l<=r){
            ll mid = (l+r)/2;
            if (check(mid)){
                ans = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        cout<<ans<<"\n";
    }
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