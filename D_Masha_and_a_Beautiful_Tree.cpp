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
ll ans = 0;

void f(vector <ll> &v, ll l, ll r){
    if (r == l) return;
    ll mid = (l+r+1)/2;
    ll maxLeft = -1, maxRight = -1;
    for (int i=l; i<mid; i++) maxLeft = max(maxLeft, v[i]);
    for (int i=mid; i<=r; i++) maxRight = max(maxRight, v[i]);
    if (maxLeft > maxRight){
        ans++;
        for (int i=l; i<mid; i++){
            swap(v[i], v[mid + i - l]);
        }
    }
    f(v, l, mid-1); f(v, mid, r);
}

void solve(){
    ans = 0;
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i]; 
    f(v, 0, n-1);
    if (is_sorted(v.begin(), v.end())) cout<<ans<<"\n";
    else cout<<-1<<"\n";

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