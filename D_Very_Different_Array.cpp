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
    ll n,m;
    cin>>n>>m;
    vector <ll> v1(n), v2(m);
    for (int i=0; i<n; i++) cin>>v1[i];
    for (int i=0; i<m; i++) cin>>v2[i];
    sort(v1.begin(), v1.end()), sort(v2.begin(), v2.end());
    ll v1beginiter = 0, v1enditer = n-1, v2beginiter = 0, v2enditer = m-1;
    ll ans = 0;

    while (v1beginiter <= v1enditer) {
        // cout<<v1beginiter<<" ";
        if (max(abs(v1[v1beginiter] - v2[v2beginiter]), abs(v1[v1beginiter] - v2[v2enditer])) > 
        max(abs(v1[v1enditer] - v2[v2beginiter]), abs(v1[v1enditer] - v2[v2enditer]))) 
        {
            if (abs(v1[v1beginiter] - v2[v2beginiter]) > abs(v1[v1beginiter] - v2[v2enditer])) {
                ans += abs(v1[v1beginiter] - v2[v2beginiter]);
                v2beginiter++; v1beginiter++;
            }
            else {
                ans += abs(v1[v1beginiter] - v2[v2enditer]);
                v1beginiter++; v2enditer--;
            }
        }
        else {
            if (abs(v1[v1enditer] - v2[v2beginiter]) > abs(v1[v1enditer] - v2[v2enditer])) {
                ans += abs(v1[v1enditer] - v2[v2beginiter]);
                v1enditer--; v2beginiter++;
            }
            else {
                ans += abs(v1[v1enditer] - v2[v2enditer]);
                v1enditer--; v2enditer--;
            }
        }
    }
    cout<<ans<<"\n";
    // cout<<"\n";
    // while (v1iter < n) {
    //     if (abs(v1[v1iter] - v2[v2beginiter]) > abs(v1[v1iter] - v2[v2enditer])) {
    //         ans += abs(v1[v1iter] - v2[v2beginiter]);
    //         v2beginiter++;
    //     }
    //     else {
    //         ans += abs(v1[v1iter] - v2[v2enditer]);
    //         v2enditer--;
    //     }
    //     v1iter++;
    //     // cout<<v1iter<<"\n";
    // }
    
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