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
    ll n; string s; cin>>n>>s;
    map <string, ll> m;
    for (int i=0; i<n-1; i++){
        string temp; temp+=s[i]; temp+=s[i+1];
        m[temp]++;
    }
    ll num = -1; string ans;
    for (auto d:m){
        if (d.second > num){
            num = d.second;
            ans = d.first;
        }
    }
    cout<<ans<<"\n";
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