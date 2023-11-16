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

ll gcd(ll a, ll b){
    if (b==0) return a;
    return gcd(b, a%b);
}

void solve(){
    ll n, a, k = 0; cin>>n;
    vector <ll> v;
    for (int i=0; i<n; i++) {
        ll a;
        cin>>a;
        if (a%2==0){
            k++;
        }
        else v.push_back(a);
    }
    ll ans = 0;
    ans += (n*(n-1) - (n-k)*(n-k-1))/2;
    n = v.size();
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (gcd(v[i], v[j]) > 1) ans++;
        }
    }
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