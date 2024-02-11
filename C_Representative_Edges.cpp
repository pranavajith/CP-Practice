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
    ll n, maxnum = -1;
    cin>>n;
    vector <ll> v(n);
    map <ll,ll> m;
    for (int i=0; i<n; i++) {
        cin>>v[i];
        m[v[i]]++;
        maxnum = max(maxnum, m[v[i]]);
    }
    ll potans = n - maxnum, nextans = 69;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            ll potans2 = 0;
            for (int k=0; k<n; k++) { 
                if ((j-k) * (v[i] - v[j]) != (i-j) * (v[j]-v[k])) potans2++;
            }
            nextans = min(nextans, potans2);
            // cout<<potans2<<"\n";
        }
    }
    // cout<<potans<<"\n";
    cout<<min(potans, nextans)<<"\n";
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