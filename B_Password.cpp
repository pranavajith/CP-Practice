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

vector <ll> dp(1e7+1);
vector <ll> power(1e7+1);

void preprocess(string s){
    ll n = s.size();
    ll p = 31, pow = 31;
    dp[0] = s[0]-'a'+1;
    power[0] = 1;
    for (int i=1; i<n; i++){
        dp[i] = (dp[i-1] + (s[i]-'a'+1)*pow) % mod;
        power[i] = pow;
        pow = (pow * p) % mod;
    }
}

ll hashquery(ll l, ll r) {
    ll ans = dp[r];
    if (l>0) ans  = (ans - dp[l-1] + mod ) % mod;
    return ans;
}

void solve(){
    string s;
    cin>>s;
    ll n = s.size();
    ll ans = -1;
    preprocess(s);
    for (int i=0; i<n; i++){
        ll pref = dp[i];
        ll suf = hashquery(n-1-i, n-1);
        if ((pref * power[n-1-i])%mod == suf) {
            for (int j=1, k = i+1 ; k<n-1; j++, k++) {
                ll mid = hashquery(j,k);
                if ((pref * power[j])%mod == mid) {
                    ans = i+1; break;   
                }
            }
        }
    }
    if (ans == -1) cout<<"Just a legend\n";
    else cout<<s.substr(0, ans)<<"\n";
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