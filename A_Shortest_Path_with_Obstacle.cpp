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
    if ((a==c && a==e && min(b,d) < f && f < max(b,d)) || (b==d && b==f && min(a,c) < e && e < max(a,c))) cout<<abs(a-c) + abs(b-d) + 2<<"\n";
    else cout<<abs(a-c) + abs(b-d)<<"\n";
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