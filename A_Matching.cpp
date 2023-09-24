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
    string s;
    cin>>s;
    int ans=1;
    if (s[0]=='0'){
        cout<<0<<"\n";
        return;
    }
    // if (s[0]=='?'){
    //     ans=9;
    // }
    for (int i=0;i<s.size();i++){
        if (i==0 && s[i]=='?'){
            ans=9;
        }
        else{
            if (s[i]=='?')ans*=10;
        }
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