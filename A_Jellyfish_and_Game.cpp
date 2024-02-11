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
    ll n,m,k;
    cin>>n>>m>>k;
    vector <ll> a(n), b(m);
    for (int i=0; i<n; i++) cin>>a[i];
    for (int i=0; i<m; i++) cin>>b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    k--;
    if (a[0] < b[m-1]){
        swap(a[0], b[m-1]);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (k%2){
        swap(a[n-1], b[0]);
    }
    cout<<accumulate(a.begin(), a.end(), 0LL)<<"\n";
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