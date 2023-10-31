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
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

vector <ll> v(2e5+5, 2);
ll mod = 1e9+7;

void solve(){
    string s;
    cin>>s;
    ll m, ans = 0;
    cin>>m;
    for (ll i=0; i<s.size(); i++){
        ll f = s[i] - '0';
        if (f+m >= 10){
            ans+=v[m+f-10] % mod;
        }
        else{
            ans+=1;
        }
    }
    cout<<ans%mod<<"\n";
}

int main() 
{
    v[9] = 3;
    for (ll i=10; i<=2e5; i++){
        v[i] = (v[i-9] + v[i-10])%mod;
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}