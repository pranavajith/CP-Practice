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

ll f(ll n, ll start){
    n -= (start);
    ll ans = 2*(n/7);
    if (n%7==6) return ans+1; 
    return ans;
}

void solve(){
    ll n;
    cin>>n;
    if (n==1) cout<<0<<" "<<1<<"\n";
    else if (n<6) cout<<0<<" "<<2<<"\n";
    else if (n==6) cout<<1<<" "<<2<<"\n";
    else cout<<f(n, 0)<<" "<<f(n, 2)+2<<"\n";
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