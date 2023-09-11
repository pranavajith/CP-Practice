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
    string s1,s2;
    cin>>s1>>s2;
    // bool flag = false;
    for (int i=0;i<s1.size()-1;i++){
        if (s1[i]=='0' && s2[i]=='0' && s1[i+1]=='1' && s2[i+1]=='1'){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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