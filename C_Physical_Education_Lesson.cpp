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
    if (n%2 != x%2){
        cout<<0<<"\n";
        return;
    }
    ll ans = 1;
    for (ll i=2; i <= n/2; i++){
        ll temp = n % (2*i-2);
        // if (n % (2*i-2) == x || (x==2 && n % (2*i-2) == 0)) ans++;
        if ((temp <= i && (temp == x || (temp == 0 && x == 2))) || (temp > i && i - (temp - i) == x)) ans++;
    }
    cout<<ans<<"\n";
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