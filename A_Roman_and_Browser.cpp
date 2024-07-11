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
      int n, k;
    cin>>n>>k;
    vector <ll>  arr(n);
    ll t = 0, s = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==1) t++;
        else s++;
    } 
    ll ans = 0;
    for(ll i = 0; i<k; i++){
        ll tt = 0, ts = 0;
        for(ll j = i; j<n; j+=k){
            if(arr[j]==1) tt++;
            else ts++;
        }
        ans = max(ans, abs(t-tt - s+ts));
    }
    cout<<ans<<endl;
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