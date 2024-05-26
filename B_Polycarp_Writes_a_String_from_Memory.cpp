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
    ll iter = 0, cnt = 0;
    map <char,ll> m;
    while (iter < n) {
        map <char,ll> m;
        cnt++;
        while (iter < n && (m.size() < 4))  {
            m[s[iter]]++; {
                if (m.size() != 4) iter++;
            }
        }
        // cout<<iter<<" "<<cnt<<" ";
        // for (auto d:m) cout<<d.first<<" "; cout<<"\n";
        if (iter == n) break;
        // iter++;
    }
    cout<<cnt<<"\n";
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