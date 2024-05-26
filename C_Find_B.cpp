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

void solve(){
    ll n,k;
    cin>>n>>k;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    vector <ll> pref(n,0), num1(n,0);
    for (int i=0; i<n; i++){
        if (i==0) {
            pref[i] = v[i];
            num1[i] = (v[i] == 1);
        }
        else {
            pref[i] = pref[i-1] + v[i];
            num1[i] = num1[i-1] + (v[i] == 1);
        }
    }
    while (k--){
        ll a,b, len;
        cin>>a>>b; len = b-a+1;
         a-=2, b--;
         if (len == 1) {
            cout<<"NO\n";
            continue;
         }
        ll tot1 = num1[b]; if (a>=0) tot1 -= num1[a];
        ll totsum = pref[b]; if (a>=0) totsum -= pref[a];
        if ((len + tot1) > totsum) cout<<"NO\n";
        else cout<<"YES\n";
    }
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