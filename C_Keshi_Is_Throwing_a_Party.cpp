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
ll n,a,b;
vector <pair <ll,ll> > v;

bool check (ll mid){
    ll rem = 0;
    for (int i=0; i<n; i++){
        if (mid - 1 - v[i].first <= rem && rem <= v[i].second) rem++;
        // if (rem<mid) return false;
    }
    if (rem >= mid) return true;
    return false;
}


void solve(){
    // ll n,a,b;
    cin>>n;
    pair <ll,ll> p;
    v.clear();
    for (int i=0; i<n; i++){
        cin>>a>>b;
        p.first = a; p.second = b;
        v.push_back(p);
    }
    ll l = 0, r = n, ans;
    while (l<=r){
        ll mid = (l+r)/2;
        if (check(mid)){
            l = mid+1;
            ans = mid;
        }
        else {
            r = mid-1;
        }
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