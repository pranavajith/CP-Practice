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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if (count(s.begin(), s.end(), 'L') == 0 || count(s.begin(), s.end(), 'L') == n) {
        cout<<-1<<"\n";
        return;
    }
    // cout<<n-1<<"\n";
    if (s.size()==2) {
        if (s=="LR") cout<<"1\n";
        else cout<<"0\n";
        return;
    }
    ll ans = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == 'R') break;
        ans++;
    }
    // for (int i=n-1; i>=0; i--){
    //     if (s[i] == 'L') break;
    //     ans++;
    // }
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