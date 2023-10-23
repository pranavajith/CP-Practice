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
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    string s;
    cin>>s;
    vector <ll> v(4);
    for (int i=0; i<4; i++){
        if (s[i]=='0')v[i] = 10;
        else v[i] = s[i]-'0';
    }
    ll ans = 0;
    ans+=v[0] + abs(v[1]-v[0]) + 1 + abs(v[2] - v[1]) + 1 +abs( v[3] - v[2]) +1;
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