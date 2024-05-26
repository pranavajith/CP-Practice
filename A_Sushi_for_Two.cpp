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
    vector <ll> v;
    ll prev, cnt = 1;
    for (int i=0; i<n; i++) {
        ll a; cin>>a;
        if (i==0){
            prev = a;
        }
        else {
            if (prev == a) cnt++;
            else {
                prev = a;
                v.push_back(cnt); cnt = 1;
            }
        }
    }
    v.push_back(cnt);
    n = v.size();
    ll ans = 1;
    for (int i=0; i<n-1; i++){
        ans = max(ans, min(v[i], v[i+1]));
    }
    cout<<ans*2<<"\n";
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