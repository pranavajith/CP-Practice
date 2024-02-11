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

ll ans1(ll n, ll num){
    if (num == 0) return n/5;
    return (n-num)/5+1;
}

void solve(){
    ll a, b;
    cin>>a>>b;
    ll ans = 0;
    // if ((a == 1 && b<4) || (a==2 && b<3) || (a==3 && b<2) ) {
    //     cout<<0<<"\n";
    //     return;
    // }
    for (int i=1; i<5; i++) {
        if (a<i || b<5-i)continue;
        ans += ans1(a,i) * ans1(b, 5-i);
        // cout<<i<<" "<<ans1(a,i)<<" , "<<5-i<<" "<<ans1(b, 5-i) <<"\n";
    }
    // cout<<ans<<" ";
    // cout<<ans1(1, 1)<<" ";
    if (a>=5 && b>=5)
    ans += ans1(a, 0) * ans1(b, 0); cout<<ans<<"\n";
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