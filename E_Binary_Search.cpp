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
    ll n,x;
    cin>>n>>x;
    vector <ll> v(n+1);
    ll req = -1;
    for (int i=1; i<=n; i++) {
        cin>>v[i];
        if (v[i] == x) req = i;
    }
    swap(v[req], v[n]);
    ll l = 1, r = n+1;
    while (r-l>1){
        int mid = (l+r)/2;
        if (v[mid] <= x) l = mid;
        else r = mid;
    }
    cout<<2<<"\n";
    cout<<req<<" "<<n<<"\n"<<l<<" "<<n<<"\n";
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