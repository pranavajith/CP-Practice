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
    ll n,m,k; cin>>n>>m>>k;
    vector <ll> v1(n), v2(m);
    for (int i=0; i<n; i++) cin>>v1[i];
    for (int i=0; i<m; i++) cin>>v2[i];
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    ll ans = 0;
    for (int i=0; i<n; i++){
        if (v1[i] + v2[0] > k) break;
        for (int j=0; j<m; j++){
            if (v1[i] + v2[j] > k) break; ans++;
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