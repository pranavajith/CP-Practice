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
    // sr
    vector<ll> freq(26, 0);
    ll bcnt = 0;
    for(ll i= 0; i<s.length(); i++)
    {
        char d = s[i];
        if(d == 'B') bcnt++;
        else if(d >= 'A' and d <= 'Z') continue;
        else freq[d - 'a']++;
    }
 
    ll acnt = freq['a' - 'a'] / 2;
    ll sbcnt = freq['b' - 'a'];
    ll lcnt = freq['l' - 'a'];
    ll ucnt = freq['u' - 'a'] / 2;
    ll scnt = freq['s' - 'a'];
    ll rcnt = freq['r' - 'a'];
 
    cout<<min({bcnt, acnt, sbcnt, lcnt, ucnt, scnt, rcnt})<<endl;
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