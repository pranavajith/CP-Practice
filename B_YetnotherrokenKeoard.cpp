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
    string s;
    cin>>s;
    string ans;
    vector <ll> lower, upper;
    for (int i=0; i<s.size(); i++){
        if (s[i] != 'b' && s[i] != 'B'){
            if (s[i] >= 'a' && s[i]<='z') lower.push_back(i);
            else upper.push_back(i);
        }
        else {
            if (s[i]=='b' && lower.size()) lower.pop_back();
            if (s[i]=='B' && upper.size()) upper.pop_back();
        }
    }
    set <ll> ss;
    for (int i=0; i<lower.size(); i++) ss.insert(lower[i]);
    for (int i=0; i<upper.size(); i++) ss.insert(upper[i]);
    vector <ll> v (ss.begin(), ss.end());
    for (int i=0; i<v.size(); i++) cout<<s[v[i]]; cout<<"\n"; 
    
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