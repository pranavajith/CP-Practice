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

ll gcd(ll a, ll b){
    if (b==0)return a;
    return gcd(b, a%b);
}

void solve(){
    ll n,m;
    cin>>n>>m;
    vector <ll> vn(n), vm(m);
    for (int i=0; i<n; i++)cin>>vn[i];
    for (int i=0; i<m; i++)cin>>vm[i];
    if (n==1){
        for (auto d:vm)cout<<abs(vn[0]+d)<<" ";
        return;
    }
    ll G = vn[1]-vn[0];
    for (int i=2; i<n; i++)G = gcd(G, vn[i] - vn[0]);
    for (int i=0; i<m; i++){
        cout<<abs(gcd(G, vn[0]+vm[i]))<<" ";
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