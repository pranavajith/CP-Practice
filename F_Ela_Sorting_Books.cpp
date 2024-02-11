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
    map <char,ll> m;
    ll n, k; cin>>n>>k;
    string s; cin>>s;
    for (auto d:s)m[d]++;
    vector <string> v(k);
    for (int i=0; i<k; i++){
        char c = 'a';
        ll temp = n/k;
        while (temp--){
            if (m[c]){
                v[i]+=c;
                m[c]--;
            }
            if (c!='z') c++;
        }
    }
    // sort(s.begin(), s.end());
    // vector <string> v(k);
    // for (int i=0; i<n; i++) {
    //     v[i%k]+=s[i];
    // }
    string ans;
    // for (auto d:v) cout<<d<<"\n";
    for (int i=0; i<k; i++){
        for (char c = 'a'; c<='z'; c++){
            if (count(v[i].begin(), v[i].end(), c) == 0) {
                ans += c;
                break;
            }
        }
    }
    sort(ans.rbegin(), ans.rend());
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