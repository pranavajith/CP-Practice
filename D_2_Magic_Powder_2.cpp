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

 vector <ll> v1, v2;
 ll n,k,a;

bool check(ll mid){
    ll lol = k;
    for (int i=0; i<n; i++){
        if ((LLONG_MAX / v1[i]) < mid) return false;
        if (v1[i] * mid > v2[i]) {
            // cout<<v1[i] * mid<<" "<<v2[i]<<"\n";
            lol -= ((v1[i] * mid) - v2[i]);
        }
        // else cout<<"shiyat";
        if (lol < 0) return false;
    }
    // cout<<"yay!";
    return true;
}

void solve(){
    // ll n,k,a;
    cin>>n>>k;
    // vector <ll> v1, v2;
    for (int i=0; i<n; i++){
        cin>>a;
        v1.push_back(a);
    }
    for (int i=0; i<n; i++){
        cin>>a;
        v2.push_back(a);
    }
    ll l = 0, r = 1e18+1, ans = 0; bool check1 = true, check2 = true;
    while (l<=r){
        ll mid = l + (r-l)/2;
        // cout<<l<<" "<<r<<"\n";
        if (check(mid)){
            ans = mid;
            l = mid+1;
        }
        else r = mid - 1;
    }
    // if (check(24999999999999999)) cout<<"yay!!!!!";
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