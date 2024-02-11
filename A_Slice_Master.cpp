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
    ll ans = 0, n = s.size();
    // ll i = 0;
    map <char, vector <ll> > m;
    for (int i=0; i<n; i++) {
        m[s[i]].push_back(i);
    }
    ll i = 0;
    while (i<n) {
        if (m[s[i]].size() == 1){
            ans++; i++;
        }
        else {
            ll finaliter = m[s[i]].back();
            ll j = i+1;
            while (j<finaliter){
                if (m[s[j]].back() > finaliter) finaliter = m[s[j]].back();
                j++;
            }
            ans += (finaliter - i + 1) * (finaliter - i + 1);
            i = finaliter + 1;
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