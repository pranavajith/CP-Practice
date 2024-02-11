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
    ll n,k;
    cin>>n>>k;
    vector <ll> v(n+1);
    for (int i=0; i<n;i++) {
        ll a; cin>>a;
        v[a] = i+1;
    }
    ll counter = 0;
    for (int i=1; i<=n; i++) {
        if (abs(i - v[i]) % k != 0) counter++;
    }
    if (counter == 0) cout<<0<<"\n";
    else if (counter == 2) cout<<1<<"\n";
    else cout<<-1<<"\n";
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