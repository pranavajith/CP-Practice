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

ll check(ll mid, ll k){
    ll ans=mid;
    while (mid){
        ans+=mid/k;
        mid/=k;
    }
    return ans;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    ll l = 0 , r = n, ans = n+1;
    while (l<=r){
        ll mid = (l+r)/2;
        if (check(mid, k) == n){
            ans = mid;
            break;
        }
        if (check(mid, k) < n) l = mid+1;
        else {
            r = mid-1;
            if (check(ans, k) > check(mid, k)){
                ans = mid;
            }
        }
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