#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    string s,t;
    cin>>s>>t;
    ll a = s.size()-1, b = t.size()-1;   
    while (a>=0 && b>=0){
        if (s[a]==t[b]){
            a--; b--;
        }
        else{
            a-=2;
        }
    }
    if (b==-1)cout<<"YES\n";
    else cout<<"NO\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--){
        // cout<<t<<"!!!!\n";
        solve();
    }
    return 0;
}