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
    ll n;
    cin>>n;
    ll c0 = 0; bool check2 = false;
    for (int i=0; i<n; i++) {
        ll a; cin>>a;
        if (a==0) c0++;
        else if (a>=2) check2 = true;
    }
    if (c0 <= (n+1)/2) cout<<0<<"\n";
    else if (check2 || c0 == n) cout<<1<<"\n";
    else cout<<2<<"\n";
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