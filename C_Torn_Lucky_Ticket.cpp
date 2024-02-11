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

ll f(string &s) {
    ll ans = 0;
    for (auto d:s) {
        ans += d-'0';
    }
    return ans;
}

void solve(){
    ll n;
    cin>>n;
    vector <string> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    map <ll,ll> m1, m2, m3, m4, m5;
    for (int i=0; i<n; i++) {
        ll numdig = v[i].size();
        if (numdig == 1) m1[f(v[i])]++;
        else if (numdig == 2) m2[f(v[i])]++;
        else if (numdig == 3) m3[f(v[i])]++;
        else if (numdig == 4) m4[f(v[i])]++;
        else m5[f(v[i])]++;
    }
    ll ans = 0, prevans = 0;
    for (int i=0; i<n; i++) {
        string s = v[i];
        ll totsum = f(s);
        if (s.size()==1) {
            ans += m1[totsum];
        }
        else if (s.size() == 2) {
            ans += (m2[totsum]);
        }
        else if (s.size() == 3) {
            ans += m3[totsum];
            ans += m1[totsum - 2*(s[0]-'0')] + m1[totsum - 2*(s[2]-'0')];
        }   
        else if (s.size() == 4) {
            ans += m4[totsum];
            ans += m2[totsum - 2*(s[0]-'0')] +  m2[totsum - 2*(s[3]-'0')];
        }
        else {
            ans += m5[totsum];
            ans += m1[totsum - 2*(s[0]-'0' + s[1]-'0')] + m1[totsum - 2*(s[4]-'0' + s[3]-'0')];
            ans += m3[totsum - 2*(s[0]-'0')] + m3[totsum - 2*(s[4]-'0')];
        }
        // cout<<s<<" "<<ans-prevans<<"\n"; prevans = ans;
        // if (i==4) cout<<m1[totsum - 2*(s[0]-'0' + s[1]-'0')] + m1[totsum - 2*(s[4]-'0' + s[3]-'0')]<<" "<<m3[totsum - 3*(s[0]-'0')] + m3[totsum - 3*(s[4]-'0')]<<" !\n";
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