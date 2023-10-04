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

void solve(){
    ll n,k;
    string s;
    cin>>n>>k>>s;
    map <char,ll> m;
    for (int i=0;i<n;i++){
        m[s[i]]++;
    }
    ll countpair = 0, countodd = 0, ans = 0;
    for (auto d:m){
        countpair += d.second / 2;
        countodd += d.second % 2;
    }
    ans += 2*(countpair / k);
    countodd += 2*(countpair % k);
    if (countodd >= k)ans++;
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