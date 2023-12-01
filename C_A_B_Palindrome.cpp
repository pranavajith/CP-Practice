
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
    ll a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    ll n = s.size();
    if (n%2){
        if ((a%2 && s[n/2]=='1') || (b%2 && s[n/2]=='0')){
            cout<<-1<<"\n";
            return;
        }
        if (s[n/2]=='?'){
            if (a%2){
                s[n/2]='0';
            }
            else {
                s[n/2]='1';
            }
        }
    }
    for (int i=0; i<n/2; i++){
        if (s[i]=='?'){
            if (s[n-i-1]=='1'){
                s[i]='1';
            }
            else if (s[n-i-1]=='0'){
                s[i]='0';
            }
        }
        else if (s[n-i-1]=='?'){
            if (s[i]=='1'){
                s[n-i-1]='1';
            }
            else if (s[i]=='0') s[n-i-1]='0';
        }
    }
    a-=count(s.begin(), s.end(), '0'); b-=count(s.begin(), s.end(), '1');
    // cout<<s<<"\n";
    if (a%2 || b%2){
        cout<<-1<<"\n";
        return;
    }
    for (int i=0; i<n/2; i++){
        if (s[i]=='?'){
            if (a>0){
                a-=2;
                s[i]='0';
                s[n-i-1]='0';
            }
            else{
                s[i]='1';
                s[n-i-1]='1';
                b-=2;
            }
        }
        
    }
    for (int i=0; i<n; i++){
        if (s[i]!=s[n-i-1]){
            cout<<-1<<"\n";
            return;
        }
    }
    if (a==0 && b==0) cout<<s<<"\n";
    else cout<<-1<<"\n";
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