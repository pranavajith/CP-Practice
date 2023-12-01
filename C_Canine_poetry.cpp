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
    string s; cin>>s; char c; ll ans = 0;
    ll n; n=s.size();
    for (ll i=1; i<n; i++){
        if (s[i]==s[i-1] || (i!=1 && s[i] == s[i-2])){
            c = 'a';
            map <char, bool> m;
            if (i!=1) m[s[i-2]]=true;
            m[s[i-2]]=true;
            if (i!=n-1) m[s[i+1]]=true;
            if (i<n-2)m[s[i+2]]=true;
            while (m[c])c++;
            s[i]=c;
            ans++;
        }
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