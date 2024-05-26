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

bool f(vector <char> &s, int i){
    if (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1' && s[i+3] == '0' && s[i+4] == '1'){
        s[i+2]='0'; return true;
    }
    return false;
}

void solve(){
    ll n;
    cin>>n;
    vector <char> v(n);
    for (int i=0; i<n; i++) cin>>v[i]; 
    ll ans = 0;
    for (int i=0; i<n-4; i++){
        // cout<<i<<" ";
        if (f(v, i)) {ans++;}
    }
    // cout<<ans<<"\n";
    for (int i=0; i<n-2; i++){
        if (v[i] == '1' && v[i+1] == '0' && v[i+2] == '1') ans++;
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