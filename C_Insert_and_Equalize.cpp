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
    ll n;
    cin>>n;
    vector <ll> v(n);
    map <ll,ll> m;
    for (int i=0; i<n; i++) {
        cin>>v[i];
        m[v[i]]++;
    }
    if (n==1) {
        cout<<1<<"\n";
        return;
    }
    sort(v.begin(), v.end());
    ll gcd1;
    for (int i=0; i<n-1; i++){
        if (i==0) gcd1 = v[n-1] - v[0];
        else gcd1 = gcd(gcd1, v[n-1] - v[i]);
    }
    ll ans = 0;
    for (int i=0; i<n-1; i++){
        ans+=(v[n-1]-v[i])/gcd1;
    }
    if (count(v.begin(), v.end(), v[n-1] - gcd1) == 0){
        cout<<ans+1<<"\n";
    }
    else {
        ll lol = v[n-1], num = 0;
        while (m[lol]){
            lol-=gcd1;
            num++;
        }
        cout<<ans+min(n,num)<<"\n";
    }
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