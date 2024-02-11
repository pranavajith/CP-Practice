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
    ll n, ans = 0;
    cin>>n;
    string s;
    cin>>s;
    for (int i=1; i<n; i++){
        if (s[i]==s[i-1]){
            ans++;
            if (i==n-1){
                if (s[i-1]!='R')s[i]='R';
                else s[i]='G';
            }
            else if (s[i+1]=='R') {
                if (s[i-1] == 'G') s[i] = 'B';
                else s[i] = 'G';
            }
            else {
                if (s[i-1]=='R') {
                    if (s[i+1]=='G')s[i] = 'B';
                    else s[i] = 'G';
                }
                else {
                    s[i] = 'R';
                }
            }
        }
    }
    cout<<ans<<"\n"<<s<<"\n";
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