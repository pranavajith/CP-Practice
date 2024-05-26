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
    ll n,m;
    cin>>n>>m;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    string s;
    cin>>s;
    ll l = count(s.begin(), s.end(), 'L')-1; ll r = l+1;
    ll term = 1;
    vector <ll> ans;
    for (int i=n-1; i>=0; i--){
        if (s[i] == 'L') term = (term * v[l--]) % m;
        else term = (term * v[r++]) % m;
        ans.push_back(term);
    }
    reverse(ans.begin(), ans.end());
    for (auto d:ans) cout<<d<<" "; cout<<"\n";
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