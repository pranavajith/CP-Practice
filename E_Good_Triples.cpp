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
    ll n = s.size();
    // reverse(s.begin(), s.end());
    ll ans = 1;
    for (int i=0; i<n; i++){
        if (s[i]=='0') ans*=1;
        else if (s[i]=='1') ans*=3;
        else if (s[i]=='2') ans*=6;
        else if (s[i]=='3') ans*=10;
        else if (s[i]=='4') ans*=15;
        else if (s[i]=='5') ans*=21;
        else if (s[i]=='6') ans*=28;
        else if (s[i]=='7') ans*=36;
        else if (s[i]=='8') ans*=45;
        else ans*=55;
    }
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