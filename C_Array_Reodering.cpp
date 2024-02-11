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

ll gcd( ll a, ll b){
    if (b==0) return a;
    else return gcd(b, a%b);
}

void solve(){
    ll n,a, counteven = 0;
    cin>>n;
    vector <ll> v;
    for (int i=0; i<n; i++) {
        cin>>a;
        if (a%2==0) counteven++;
        else {
            v.push_back(a);
        }
    }
    ll ans = counteven * (counteven - 1) / 2;
    ans += counteven * (n-counteven);
    for (int i=0; i<v.size(); i++) {
        for (int j=i+1; j<v.size(); j++) {
            if (gcd(v[i], 2*v[j]) > 1) ans++;
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