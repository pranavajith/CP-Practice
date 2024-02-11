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
    // map <string, bool> m;
    string s;
    set <string> lol, lol1;
    bool check = false;
    for (int i=0; i<n; i++) {
        cin>>s;
        // m[s] = true;
        lol.insert(s);
        if (s.size() == 3) lol1.insert(s.substr(0,2));
        reverse(s.begin(), s.end());
       if (lol.find(s) != lol.end() || lol1.find(s) != lol1.end() || (lol.find(s.substr(0,2)) != lol.end())) check = true;
    }
    if (check) cout<<"YES\n";
    else cout<<"NO\n";
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