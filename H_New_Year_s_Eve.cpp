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
    // cout<<
    ll siz;
    for (int i=0; i<=61; i++) {
        if ((n>>i) & 1) siz = i;
    }
    siz++;
    // ll siz = floor (log2(n) + 1);
    // cout<<siz<<" "; 
    if (k==1) cout<<n<<"\n";
    else {
        ll ans = 1;
        while (siz--) ans*=2;
        cout<<ans-1<<"\n";
    }
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