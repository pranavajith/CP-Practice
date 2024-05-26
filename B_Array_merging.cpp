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
    ll n; cin>>n;
    vector <ll> a(n), b(n);
    for (int i=0; i<n; i++) cin>>a[i];
    for (int i=0; i<n; i++) cin>>b[i];
    vector <ll> a1(2*n+1, 0), b1(2*n+1, 0);
    ll cur = a[0], counter = 1;
    for (int i=1; i<n; i++){
        if (a[i] == cur) counter++;
        else {
            a1[cur] = max(a1[cur], counter);
            cur = a[i];
            counter = 1;
        }
    }
    a1[cur] = max(a1[cur], counter);
    cur = b[0], counter = 1;
    for (int i=1; i<n; i++){
        if (b[i] == cur) counter++;
        else {
            b1[cur] = max(b1[cur], counter);
            cur = b[i];
            counter = 1;
        }
    }
    b1[cur] = max(b1[cur], counter);
    ll ans = 0;
    for (int i=0; i<=2*n; i++){
        ans = max(ans, a1[i]+b1[i]);
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