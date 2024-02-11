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
    for (int i=0; i<n; i++) cin>>v[i]; ll counter = 0;
    vector <ll> v1(n,0), v2(n,0);
    for (int i=n-2; i>=0; i--) {
        if (2*v[i+1]<=v[i]) {
            v1[i] = 1; counter = k-1;
        }
        else if (counter > 0) {
            v1[i] = 1; counter--;
        }
    }
    // for (auto d:v1) cout<<d<<" "; cout<<"\n";
    // for (int i=n-1; i>=0; i--){
    //     if (v1[i]==1){
    //         if (i-k+1 < 0) break;
    //         for (int j=i-k+1; j<=i; j++) v2[j] = 1;
            
    //     }
    // }
    ll ans = 0;
    for (int i=0; i<n-k; i++) {
        if (!v1[i]) ans++;
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