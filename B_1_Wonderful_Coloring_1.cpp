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
    map <char,ll> m;
    string s; cin>>s;
    ll n; n=s.size();
    for (int i=0; i<n; i++){
        m[s[i]]++;
    }
    ll countsingle = 0, ans = 0;
    for (auto d:m){
        if (d.second==1) countsingle++;
        else ans++;
    }
    ans+=countsingle/2;
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