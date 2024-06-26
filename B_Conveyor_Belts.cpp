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

ll check(ll a,ll b, ll n){
    if (a > n/2) a = n + 1 - a;
    if (b > n/2) b = n + 1 - b;
    return min(a,b);
    // return -1;
}

void solve(){
    ll n,x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    cout<<abs(check(x1, y1, n) - check(x2, y2, n))<<"\n"; 
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