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
    for (int i=0; i<n; i++) cin>>v[i]; 
    for (int i=0; i<n-2; i++){
        if (v[i+1] < 2*v[i]) {
            cout<<"NO\n"; return;
        }
        v[i+1] -= 2*v[i];
        v[i+2] -= v[i];
        v[i] = 0;
        // for (auto d:v) cout<<d<<" "; cout<<"\n";
    }
    if (count(v.begin(), v.end(), 0) == n) cout<<"YES\n";
    else cout<<"NO\n";
    
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