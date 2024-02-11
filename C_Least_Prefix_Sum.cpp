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
    vector <ll> v(n);
    for (int i=0; i<n; i++){
        cin>>v[i];
    }
    if (n==1){
        cout<<0<<"\n";
        return;
    }
    ll ans = 0;
    if (v[m-1] > 0 && m!=1){
        ans++;
        v[m-1] *= -1;
    }
    multiset <ll> s;
    ll cursum = -1 * v[m-1];
    for (int i = m-2; i>0; i--) {
        cursum -= v[i];
        s.insert(v[i]);
        while (cursum < 0) {
            auto it = s.end(); it--; ll temp = *it; s.erase(it); 
            cursum += 2*temp;
            ans++;
           }
    }
    s.clear();
    cursum = 0;
    for (int i=m; i<n; i++) {
        cursum += v[i];
        s.insert (-1*v[i]);
        while (cursum < 0) {
            auto it = s.end(); it--; ll temp = *it; s.erase(it); 
            cursum += 2*temp;
            ans++;
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