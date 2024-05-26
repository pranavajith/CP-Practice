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
    ll n,k; cin>>n>>k;
    string s; cin>>s;
    if (k==0){
        cout<<s<<"\n"; return;
    }
    if (n==1){
        if (k) cout<<0<<"\n";
        else cout<<s<<"\n"; return;
    }
    if (s[0] != '1') {
        s[0] = '1'; k--;
    }
    for (int i=1; i<n; i++){
        if (s[i] == '0') continue;
        if (k==0) break;
        k--;
        s[i] = '0';
    }
    cout<<s<<"\n";
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