#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

ll req(ll n){
    ll ans = n-1;
    // cout<<floor(log10(n)+1);
    ll w = 10;
    for (int i=0; i<floor(log10(n)); i++){
        ans+=n/w;
        w*=10;
    }
    return ans;
}

void solve(){
    ll n,m;
    cin>>n>>m;
    cout<<req(m)-req(n)<<"\n";
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