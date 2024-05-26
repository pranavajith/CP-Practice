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
vector <ll> pref;

ll calc(ll n){
    string a  = to_string(n), b = to_string(n-1);
    if (b.size() != a.size()) return a.size();
    ll cnt = 0;
    for (int i=0; i<a.size(); i++){
        if (a[i] != b[i]) cnt++;
    }
    return cnt;
}

void solve(){
    ll n; cin>>n;
    ll 
}

int main() 
{
    pref.push_back(0);
    for (int i=1; i<=4e5; i++){
        pref.push_back(pref.back() + calc(i));
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}