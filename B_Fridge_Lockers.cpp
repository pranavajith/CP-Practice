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
    for (int i=0; i<n; i++) cin>>v[i];
    if (m<n || (n==2 && m>1)) cout<<"-1\n";
    // else if (m==n) cout<<accumulate(v.begin(), v.end(), 0LL)*2<<"\n";
    else {
        ll sum1 = accumulate(v.begin(), v.end(), 0LL)*2;
        // sort(v.begin(), v.end());
        cout<<sum1<<"\n";
        for (int i=1; i<n; i++) cout<<i<<" "<<i+1<<"\n"; cout<<n<<" "<<1<<"\n";
    }
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