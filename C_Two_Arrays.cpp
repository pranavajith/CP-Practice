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
    vector <ll> a(n), b(n);
    for (int i=0; i<n; i++) cin>>a[i]; 
    for (int i=0; i<n; i++) cin>>b[i];
    sort(a.begin(), a.end()); 
    sort(b.begin(), b.end()); 
    for (int i=0; i<n; i++){
        if (b[i] != a[i] && b[i]!=a[i]+1) {
            cout<<"NO\n"; return;
        }
    }
    cout<<"YES\n";
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