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
    ll n; string s; cin>>n>>s; string ans;
    if (count(s.begin(), s.end(), '?') == n) {
        for (int i=0; i<n; i++){
            if (i%2) ans.push_back('R');
            else ans.push_back('B');
        }
        cout<<ans<<"\n";
        return;
    }
    ll a = 0;
    for (int i=0; i<n; i++){
        if (s[i]!='?'){
            a = i; break;
        }
    }
    for (int i=a-1; i>=0; i--){
        if (s[i+1]=='R')s[i]='B';
        else s[i]='R';
    }
    reverse(s.begin(), s.end());
    for (int i=0; i<n; i++){
        if (s[i]!='?'){
            a = i; break;
        }
    }
    for (int i=a-1; i>=0; i--){
        if (s[i+1]=='R')s[i]='B';
        else s[i]='R';
    }
    reverse(s.begin(), s.end());
    for (int i=0; i<n; i++){
        if (s[i]=='?'){
            if (s[i-1]=='R')s[i]='B';
            else s[i]='R';
        }
    }
    cout<<s<<"\n";
    // for (int i=n-1; i>=0; i--){
    //     if (s[i]!='?')break;
    //     s.pop_back();
    // }
    // n = s.size();
    // reverse(s.begin(), s.end());
    // for (int i=n-1; i>=0; i--){
    //     if (s[i]!='?')break;
    //     s.pop_back();
    // }
    // n = s.size();
    // ll count_q = 0; char prev = s[0]; ll ans = 0;
    // for (int i=0; i<n; i++){
    //     if (s[i]=='?') count_q++;
    //     else{
    //         if (count_q != 0 && i!=0){
    //             if (((count_q % 2 == 1) && (prev == s[i])) || ((count_q % 2 == 0) && (prev != s[i]))) ans++;
    //         }
    //         prev = s[i];
    //     }
    // }
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