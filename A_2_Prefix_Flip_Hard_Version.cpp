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
    string s1,s2;
    cin>>s1>>s2;
    vector <ll> left, right;
    s1+='0'; s2+='0';
    for (int i=1; i<=n; i++) {
        if (s1[i] != s1[i-1]) left.push_back(i);
    }
    for (int i=1; i<=n; i++) {
        if (s2[i] != s2[i-1]) right.push_back(i);
    }
    left.insert(left.end(), right.rbegin(), right.rend());
    cout<<left.size()<<" ";
    for (auto d:left) cout<<d<<" "; cout<<"\n";
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