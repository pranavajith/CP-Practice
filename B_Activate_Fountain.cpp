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
    vector <ll> v(n);
    for (int i=0; i<n; i++){
        cin>>v[i];
    }
    ll ans = 0;
    ll curpointer = 0;
    // for (auto d:v) cout<<d<<" "; cout<<"\n\n\n\n"; cout<<v[0]<<"\n";
    while (curpointer < n) {
        ll maxdist = curpointer + v[curpointer];
        for (ll i=curpointer; i<n; i++) {
            if (i - v[i] <= curpointer && i + v[i] >= maxdist) {
                // iter = i;
                maxdist = i + v[i];
            }
        }
        // cout<<iter<<" !\n";
        ans++;
        // cout<<iter<<" !\n";
        curpointer = maxdist + 1;
        // cout<<curpointer<<" !\n";

    }
    ll ans1 = ans;
    ans = 0 ;
    curpointer = 0;
    reverse(v.begin(), v.end());
    while (curpointer < n) {
        ll maxdist = curpointer + v[curpointer];
        for (ll i=curpointer; i<n; i++) {
            if (i - v[i] <= curpointer && i + v[i] >= maxdist) {
                // iter = i;
                maxdist = i + v[i];
            }
        }
        // cout<<iter<<" !\n";
        ans++;
        // cout<<iter<<" !\n";
        curpointer = maxdist + 1;
        // cout<<curpointer<<" !\n";

    }
    cout<<min(ans, ans1)<<"\n";
    // ll ans1 = ans;
    // ans = 0; curpointer = 0;
    // // reverse(v.begin(), v.end());
    // while (curpointer < n) {
    //     ll iter = curpointer;
    //     for (int i=iter + 1; i< n; i++) {
    //         if (i - v[i] <= curpointer) {
    //             iter = i;
    //             // cout<<"ok "<<curpointer<<" "<<iter<<"\n";
    //         }
    //     }
    //     // cout<<iter<<" !\n";
    //     ans++;
    //     // cout<<curpointer<<" "<<iter<<" -> "<<v[iter]<<" ! ";
    //     curpointer = iter + v[iter] + 1;
    //     cout<<curpointer<<" ! ";

    // }
    // cout<<min(ans, ans1)<<"\n";
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