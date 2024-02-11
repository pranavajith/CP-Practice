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

ll f(ll a, ll t) {
    return max(3*a / 10, a - (a*t) / 250);
}

void solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if (f(a, c) == f(b,d)) cout<<"Tie\n";
    else if (f(a,c) > f(b,d)) cout<<"Misha\n";
    else cout<<"Vasya\n";
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