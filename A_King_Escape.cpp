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

ll sign1(ll a){
    return a/abs(a);
}

void solve(){
    ll n; cin>>n;
    ll q1, q2, k1, k2, c1, c2;
    cin>>q1>>q2>>k1>>k2>>c1>>c2;
    if (sign1(q1-k1) == sign1(q1-c1) && sign1(q2 - k2) == sign1(q2-c2)) cout<<"YES\n";
    else cout<<"NO\n";
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