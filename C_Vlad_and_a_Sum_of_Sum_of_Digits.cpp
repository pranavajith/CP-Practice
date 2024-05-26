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
vector <ll> v;

ll f(ll n){
    ll ans = 0;
    while (n){
        ans += n%10; n/=10;
    }
    return ans;
}

void solve(){
    ll n; cin>>n;
    cout<<v[n]<<"\n";
}

int main() 
{
    v.push_back(0);
    for (int i=1; i<=2e5; i++){
        v.push_back(v.back() + f(i));
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}