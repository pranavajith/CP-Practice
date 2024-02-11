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
    vector <ll> nochange(2*k+1, 0), singlechange(2*k+2, 0);
    for (int i=0; i<n/2; i++) nochange[v[i] + v[n-1-i]]++;
    for (int i=0; i<n/2; i++) {
        singlechange[min(v[i], v[n-1-i]) + 1]++;
        singlechange[max(v[i], v[n-1-i]) + k + 1]--;
    }
    for (int i=1; i<= 2*k+1; i++) {
        singlechange[i] += singlechange[i-1];
    }
    ll ans = LLONG_MAX;
    for (int i=2; i<=2*k; i++) {
        ans = min(ans, (singlechange[i] - nochange[i]) + 2*(n/2 - singlechange[i]));
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