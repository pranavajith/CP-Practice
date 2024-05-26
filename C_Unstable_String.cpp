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
    ll l = 0, r = 0, ans = 0;
    while (r<n){
        ll d = 0;
        while (r<n && (s[r] == '?' || (d%2==0 && s[r] == s[l]) || (d%2 && s[r] != s[l]))){
            d++; r++;
        }
        ans += (r-l)*(r-l-1)/2;
        if (r == n) break;
        l = r;
        while (l>0 && s[l-1] == '?') l--;

    }
    cout<<ans+n<<"\n";
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