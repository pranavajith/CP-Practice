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

ll gcd (ll a, ll b){
    if (b==0)return a;
    return gcd(b, a%b);
}


void solve(){
    ll n; cin>>n; 
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (gcd(v[i], v[j]) <= 2) {
                cout<<"Yes\n";
                return;
            }
        }
    }
    cout<<"No\n";
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