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
    ll n;
    cin>>n;
    // vector <ll> v(n);
    map <ll,ll> m;
    for (ll i = 0; i<n; i++){
        // cin>>v[i];
        ll a;
        cin>>a;
        for (ll j = 2; j*j <=a; j++){
            while (a%j==0){
                a/=j;
                m[j]++;
            }
        }
        if (a!=1)m[a]++;
    }
    for (auto d:m){
        if (d.second < n || d.second%n){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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