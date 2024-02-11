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
    ll n,k,d;
    cin>>n>>k>>d;
    vector <ll> v(n), vk(k);
    for (int i=0; i<n; i++) {
        cin>>v[i];
        if (v[i] > i+1) v[i] = -1;
        else v[i] = i+1 - v[i];
    }
    for (int i=0; i<k; i++) cin>>vk[i]; 
    // for (auto d:vk) cout<<d<<" "; cout<<"\n\n\n";
    ll preans = count(v.begin(), v.end(), 0);
    ll ans = preans + (d-1)/2; 
    ll lol = 0, biglol = 0;
    while (lol < d-1 && biglol < n){
        biglol++;
    // ll iter = 0;
    // cout<<ans<<"\n";
    for (int i=0; i<k; i++) {
        lol++;
        // iter++;
        // cout<<i<<" lol "<<vk[i]<<"\n";
        for (int j=0; j<vk[i]; j++) {
            v[j]--;
            if (v[j] == 0) {
                preans++;
                // cout<<"gotcha";
                // cout<<i<<" "<<j<<"\n";
            }
            else if (v[j] == -1) preans--;
        }
        // if (lol != d-1) ans = max(ans, preans + (d-iter-1)/2);
        ans = max(ans, preans + (d-lol-1)/2);
    }}
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