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
    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    ll x = a + min(b,f), y = max(b,f) - min(b,f);
    // cout<<x<<" "<<y<<"\n";
    cout<<2*min(b,f)*a + min(b,f)*min(b,f) + 2*x*y + 2*d*min(e,c) + min(e,c)*min(e,c)<<"\n";
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