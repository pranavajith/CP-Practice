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

bool isPal(string s){
    for (int i=0; i<s.size()/2; i++){
        if (s[i] != s[s.size()-1-i]) return false;
    }
    return true;
}

void solve(){
    string s; cin>>s;
    // while (!s.empty() && s.back() == '0') s.pop_back();
    ll n = 10;
    while (n--){
        if (isPal(s)) {
            cout<<"YES\n";
            return;
        }
        s = '0' + s;
    }
    cout<<"NO\n";

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