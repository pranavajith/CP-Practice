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

// ll gcd(ll a, ll b){
//     if (b==0)return a;
//     return gcd(b, a/b);
// }

// pair <ll,ll> getRatio(ll a, ll b){
//     ll g = gcd(a,b);
//     a/=g; b/=g;
//     return {a,b};
// }

void solve(){
    double n, countD = 0, countK = 0;
    string s;
    cin>>n>>s;
    map <double ,ll> m;
   for (auto c:s){
    if (c=='K')countK++;
    else countD++;
    if (countK==0)cout<<++m[-1]<<" ";
    // else if (countD==0)cout<<m[-2]++<<" ";
    else cout<<++m[countD / countK]<<" ";
   }
    cout<<"\n";
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