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

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double
#define f(i,a,b) for(int i = a; i < b; i++)
#define fe(i,a,b) for(int i = a; i >= b; i--)
#define vll vector<ll>
#define sor(v) v.begin(),v.end()

bool check(ll mid, vector<ll> &a, vector<ll> &b, ll k){
    ll sum = 0;
    for(ll i = 0; i < a.size() ; i++){
        if (mid > 1e17/a[i]) return false;
        sum += max(0ll, mid*a[i] - b[i]);
        if(sum > k) return false;
    }
    return true;
}
void solve(){
    ll n, k; cin >> n >> k;
    vll a(n), b(n);
    f(i,0,n) cin >> a[i];
    f(i,0,n) cin >> b[i];
    ll left = 0, right = 1e12, ans = 0;
    while(left <= right){
        ll mid = (left + right)/2;
        if(check(mid,a,b,k)){
            ans = mid, left = mid + 1;
        }
        else right = mid - 1;
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    t = 1;
    while(t--){
        solve();
    }
return 0;
}