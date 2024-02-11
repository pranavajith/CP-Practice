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
    map <ll,ll> init;
    vector <ll> v(n);
    bool check = false;
    for (int i=0; i<n; i++) {
        cin>>v[i];
        init[v[i]]++;
        if (init[v[i]] == k) {
            check = true;
        }
    }
    if (check) {
        cout<<0<<"\n";
        return;
    }
    sort(v.begin(), v.end());
    ll ans = LLONG_MAX;
    map <ll,ll> potans, numberoftries;
    for (int i=0; i<n; i++) potans[v[i]]++;
    for (int i=0; i<n; i++){
        ll temp = v[i], iter = 0;
        while (temp > 0) {
            iter++;
            temp/=2;
            potans[temp]++;
            numberoftries[temp]+=iter;
            // cout<<temp<<" "<<numberoftries[temp]<<"\n";
            if (potans[temp] >= k){
                ans = min(ans, numberoftries[temp]);
            }
        }
    }
    cout<<min(ans, numberoftries[0])<<"\n";
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