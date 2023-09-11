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

vector <ll> v;

void solve(){
    string s;
    cin>>s;
    ll ans = INT_MAX;
    for (auto d:v){
        string t = to_string(d);
        int tp=0, sp=0, taken=0;
        while (sp<s.length() && tp<t.length()){
            if (s[sp]==t[tp]){
                taken++;
                tp++;
            }
            sp++;
        }
        ll a = s.length() + t.length() - 2*taken;
        ans = min(ans, a);
    }
    cout<<ans<<"\n";
}

int main() 
{
    for (long long int i = 1; i<2e18;i*=2){
        v.push_back(i);
    }
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}