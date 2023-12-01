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
    reverse(s.begin(), s.end());
    ll tomakezero = -1;
    ll i = 0;
    while (i<s.size()){
        if (s[i]>'4'){
            i++;
            while (i<s.size() && s[i]=='9')i++;
            if (i==s.size()){
                string ans(s.size(), '0');
                ans = '1' + ans;
                cout<<ans<<"\n";
                return;
            }
            s[i]++;
            // cout<<i<<" ";
            tomakezero = i-1;
        }
        else i++;
    }
    for (int i=tomakezero; i>=0; i--) s[i]='0';
    reverse(s.begin(), s.end());
    cout<<s<<"\n";
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