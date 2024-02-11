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

vector <pair <ll,ll> > v;
ll n;

// ll sol(ll i, ll mink, ll curind){
//     if (i>=n) return mink;
//     return min ( sol(i+1, max(mink, abs(curind - v[i].first)), v[i].first ) ,sol(i+1, max(mink, abs(curind - v[i].second)), v[i].second)  );
// }

bool check (ll mid){
    ll curposl, curposr;
    if (mid >= abs(v[0].second)){
        curposr = v[0].second;
        curposl = v[0].first;
    }
    else if (mid >= abs(v[0].first)){
        curposr = mid;
        curposl = v[0].first;
    }
    else return false;
    
    for (int i=1; i<n; i++){
        ll newleftmost = max(0LL, curposl - mid), newrightmost = curposr + mid;
        if (newleftmost > v[i].second || newrightmost < v[i].first){
            return false;
        }
        curposl = max(v[i].first, newleftmost); 
        curposr = min(v[i].second, newrightmost);
    }
    return true;
}

void solve(){
    ll l,r;
    cin>>n;
    // vector <pair <ll,ll> > v;
    v.clear();
    pair <ll,ll> p;
    for (int i=0; i<n; i++){
        cin>>l>>r;
        p.first = l; p.second = r;
        v.push_back(p);
    }

    // cout<<sol(0,0,0)<<"\n";

    l = 0, r = LLONG_MAX; ll ans;
    while (l<=r){
        ll mid = l + (r-l)/2;
        if (check(mid)){
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
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