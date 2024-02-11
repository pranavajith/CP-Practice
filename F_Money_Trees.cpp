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
    ll ans = 1;
    vector <ll> countapples(n), height(n);
    for (int i=0; i<n; i++) cin>>countapples[i];
    for (int i=0; i<n; i++) cin>>height[i];
    if (*min_element(countapples.begin(), countapples.end()) > k){
        cout<<0<<"\n";
        return;
    }
    ll l = 0, r = 1, cursiz = 1, curap = countapples[0];
    while (r<n) {
        while (r<n && curap + countapples[r] <= k && (height[r-1] % height[r] == 0)) {
            curap += countapples[r];
            r++; cursiz++;
            ans = max(ans, cursiz);
        }
        if (r==n) {
            ans = max(ans, cursiz);
            break;
        }
        if (height[r-1] % height[r]) {
            ans = max(ans, cursiz); cursiz = 1; l = r; r = l + 1; curap = countapples[l];
            continue;
        }
        cursiz--; curap -= countapples[l]; l++;
        ans = max(ans, cursiz); 
    }
    ans = max(ans, cursiz);
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