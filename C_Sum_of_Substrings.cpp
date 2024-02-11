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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s; ll ans = 0;
    if (count(s.begin(), s.end(), '1') == 0){
        cout<<0<<"\n";
        return;
    }
    if (s[n-1]!='1'){
    for (int i=n-1; i>=0; i--){
        if (s[i]=='1'){
            if (k < n-i-1) break;
            else {
                k-= (n-i-1);
                s[i]='0';
                s[n-1]='1';
                break;
            }
        }
    }
    }
    if (s[0]!='1'){
    for (int i=0; i<n-1; i++){
        if (s[i]=='1'){
            if (k<i)break;
            else{
                s[i]='0';
                s[0]='1';
                break;
            }
        }
    }
    }
    for (int i=0; i<n-1; i++){
        string temp; temp+= s[i]; temp+=s[i+1];
        if (temp=="01") ans++;
        else if (temp=="10") ans+=10;
        else if (temp=="11") ans+=11;
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