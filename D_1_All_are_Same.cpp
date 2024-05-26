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
    set <ll> s;
    for (int i=0; i<n; i++) {
        ll a; cin>>a;
        s.insert(a);
    }
    if (s.size() == 1) {
        cout<<-1<<"\n";
        return;
    }
    vector <ll> v(s.begin(), s.end());
    ll gap = v[1] - v[0];
    for (int i=2; i<v.size(); i++){
        gap = gcd(gap, v[i]-v[0]);
    }
    cout<<gap<<"\n";
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