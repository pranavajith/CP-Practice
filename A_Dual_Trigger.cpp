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
    ll n; cin>>n;
    string s; cin>>s;
    ll a = count(s.begin(), s.end(), '1');
    if (a % 2) {
        cout<<"NO\n";
        return;
    }
    if (a == 2){
        if (s.find("11") != string::npos) cout<<"NO\n";
        else cout<<"YES\n";
        return;
    }
    cout<<"YES\n";

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