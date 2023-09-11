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
    ll n, a=0;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    s1.push_back('0');
    s2.push_back('0');
    ll count1=0;
    for (int i=0;i<n;i++){
        count1+= (s1[i]=='1') - (s1[i]=='0');
        if (((s1[i]==s2[i]) != (s1[i+1]==s2[i+1])) && count1!=0){
            cout<<"NO\n";
            return;
        }

    }
    cout<<"YES\n";
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