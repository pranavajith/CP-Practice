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

bool loop(vector <int> v, ll k) {
    for (int i=0; i<k; i++) {
        if (v[i] == 0) return false;
    }
    return true;
}

void solve(){
    ll n,k,siz;
    cin>>n>>k>>siz;
    string s;
    cin>>s;
    if (siz < n*k) {
        string temp (n*k - siz, 'A');
        s.append(temp);
    }
    vector <int> v(k, 0);
    // cout<<s<<"\n";
    int cnt = 0;
    string ans;
    for (int i=0; i<siz; i++){
        if (s[i]-'a' >= k || s[i]-'a' < 0) continue;
        v[s[i]-'a']++;  
        if (loop(v, k)){
            ans += s[i];
            for (int i=0; i<k; i++) v[i] = 0;
            cnt++;
        }
    }
    if (cnt >= n) {
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
    char c = 'a';
    for (int i=0; i<k; i++) {
        if (v[i] == 0) {
            c = 'a' + i;
            break;
        }
    }
    ans += c;
    while (ans.size() < n) ans += 'a';
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