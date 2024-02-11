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

ll sumofdig(ll n){
    string s = to_string(n);
    ll ans = 0;
    for (int i=0; i<s.size(); i++){
        ans+=s[i]-'0';
    }
    return ans;
}

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    vector <ll> v;
    for (int s = 1; s<81; s++){
        ll temp = 1;
        for (int j=0; j<a; j++) temp *= s;
        ll x = b * temp + c;
        if (sumofdig(x) == s && x < 1000000000 && x > 0) v.push_back(x);  
    }
    cout<<v.size()<<"\n"; for (int i=0; i<v.size(); i++) cout<<v[i]<<" ";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}