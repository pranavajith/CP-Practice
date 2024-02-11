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
    string s; ll k; map <char, ll> m;
    cin>>s>>k; ll n = s.size();
    ll maxNum = 0; 
    for (char c = 'a'; c<='z'; c++){
        ll a; cin>>a;
        m[c] = a;
        maxNum = max(maxNum, a);
    }
    ll cursum = 0;
    for (int i=0; i<n; i++){
        cursum += (i+1)*m[s[i]];
    }
    // for (cha)
    ll i = n+1;
    while (k--){
        cursum += i*maxNum; i++;
    }
    cout<<cursum<<"\n";
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