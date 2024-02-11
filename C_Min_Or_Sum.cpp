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
    ll n;
    cin>>n;
    // vector <ll> v()
    ll a;
    map <ll,ll> m;
    for (int i=0; i<n; i++){
        cin>>a;
        for (int j=0; j<=30; j++){
            if ((a>>j) & 1) m[j] = 1;
        }
    }
    ll ans = 0, iter = 1;
    for (int i=0; i<=30; i++) {
        if (m[i]) ans+=iter;
        iter*=2;
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