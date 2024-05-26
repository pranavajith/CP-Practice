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
    ll a,b; cin>>a>>b;
    ll n; cin>>n;
    double ans = 1e9;
    while (n--){
        double x,y,s;
        cin>>x>>y>>s;
        x-=a, y-=b;
        double d = x*x + y*y;
        // cout<<d<<" !";
        d = sqrt(d);
        d /= s;
        // cout<<d<<" ! ";
        if (d < ans) ans = d;
    }
    cout<<fixed<<setprecision(20)<<ans<<"\n";
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