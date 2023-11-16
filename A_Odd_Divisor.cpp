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
    // for (ll i=3; i*i <=n; i+=2){
    //     if (n%i == 0){
    //         cout<<"YES\n";
    //         // cout<<i<<" ";
    //         return;
    //     }
    // }
    // if (n % 2 == 1) cout<<"YES\n";
    // else cout<<"NO\n";
    ll i = 2;
    while (i < n) i*=2;
    if (i==n) cout<<"NO\n";
    else cout<<"YES\n";

    // for (ll i = 2; i*i<=n; i++){
    //     if (n%i == 0){
    //         cout<<i<<" "; while (n%i==0)n/=i;
    //     }
    // }
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