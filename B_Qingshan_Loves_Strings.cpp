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
    ll n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    if (s.size()==1){
        cout<<"Yes\n";
        return;
    }
    if (s.find("00") == string::npos && s.find("11") == string::npos){
        cout<<"Yes\n";
        return;
    }
    if (t.size()>1 && (t.find("00") != string::npos || t.find("11") != string::npos)){
        cout<<"No\n";
        return;
    }
    if (t[0] != t[t.size()-1]){
        cout<<"No\n";
        return;
    }
    if (t[0]=='0'){
        if (s.find("00") != string::npos){
            cout<<"No\n";
            return;
        }
        else {
            cout<<"Yes\n";
            return;
        }
    }
    else{
        if (s.find("11") != string::npos){
            cout<<"No\n";
            return;
        }
        else {
            cout<<"Yes\n";
            return;
        }
    }
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