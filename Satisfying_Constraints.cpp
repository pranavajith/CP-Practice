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

void solve(){
    ll n;
    cin>>n;
    ll a,b, maxa = -1, minb = 1e9; bool checka = false, checkb = false;
    vector <ll> v;
    for (int i=0; i<n; i++) {
        cin>>a>>b;
        if (a==3) v.push_back(b);
        else if (a==1) maxa = max(maxa, b);
        else minb = min(minb,b);
    }
    if (maxa > minb) cout<<0<<"\n";
    else {
        sort(v.begin(), v.end());
        while (v.size() && v.back() > minb) v.pop_back();
        ll minus = 0;
        reverse(v.begin(), v.end());
        while (v.size() && v.back() < maxa) v.pop_back();
        cout<<minb - maxa + 1  - v.size()<<"\n";
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