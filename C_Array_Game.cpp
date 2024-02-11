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
    // map <ll,ll> m;
    for (int i=0; i<n; i++) cin>>v[i];
    if (k>=3) {
        cout<<0<<"\n";
        return;
    }
    else {
        sort(v.begin(), v.end());
        ll minel = v[0], check = LLONG_MAX;
        for (int i=0; i<n-1; i++){
            check = min(check, abs(v[i+1]-v[i]));
        }
        if (k==1 || minel == 0 || check == 0) cout<<min(minel, check)<<"\n";
        else {
            ll ans = LLONG_MAX;
            for (int i=0; i<n; i++){
                for (int j=i+1; j<n; j++){
                    ll diff = abs(v[j]-v[i]);
                    ll upper = upper_bound(v.begin(), v.end(), diff) - v.begin();
                    if (upper != 0) ans = min(ans, abs(v[upper-1] - diff));
                    if (upper < n) ans = min(ans, abs(v[upper] - diff));
                    if (ans==0) {
                        cout<<0<<"\n";
                        return;
                    }
                }
            }
            cout<<min(check,ans)<<"\n";
        }
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