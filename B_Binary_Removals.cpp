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
    int first11 = 1e9, last00 = -1, n = s.size();
    for (int i=0; i<n-1; i++) {
        if (s[i] == '1' && s[i+1] == '1') {
            first11 = i; break;
        } 
    }
    if (first11 == 1e9) {
        cout<<"YES\n";
        return;
    }
    for (int i=n-1; i>0; i--) {
        if (s[i] == '0' && s[i-1] == '0') {
            last00 = i; break;
        }
    }
    if (last00 == -1) {
        cout<<"YES\n";
        return;
    }
    // cout<<first11<<" "<<last00<<"\n";
    if (first11 < last00) cout<<"NO\n";
    else cout<<"YES\n";
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