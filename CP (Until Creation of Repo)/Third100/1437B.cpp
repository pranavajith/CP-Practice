#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n, c1=0,c2=0;
    cin>>n;
    string s;
    cin>>s;
    for (int i=0;i<n-1;i++){
        if (s[i]==s[i+1] && s[i]=='1')c1++;
    }
    for (int i=0;i<n-1;i++){
        if (s[i]==s[i+1] && s[i]=='0')c2++;
    }
    cout<<max(c1,c2)<<"\n";
    // cout<<count1<<"\n";
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}