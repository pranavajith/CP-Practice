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
    string s1, s2;
    cin>>s1>>s2;
    // s1 += s2;
    map <char, ll> m;
    m[s1[0]]++; m[s1[1]]++; 
    m[s2[0]]++; m[s2[1]]++; 
    if (m.size()==1) cout<<0<<"\n";
    else if (m.size()==2) cout<<1<<"\n";
    else if (m.size()==3) cout<<2<<"\n";
    else cout<<3<<"\n";
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