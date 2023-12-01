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
    ll w, m = 0;
    vector <bool> v(26, false);
    for (int i=0; i<s.size(); i++){
        w = s[i]-'a';
        if (!v[w]) v[w]=true;
        else {
            m += 2;
            for (int j=0; j<26; j++) v[j] = false;
        }
    }
    cout<<s.size()-m<<"\n";
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