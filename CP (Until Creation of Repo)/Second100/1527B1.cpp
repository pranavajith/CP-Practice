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
    ll n, count0=0;
    cin>>n;
    string s;
    cin>>s;
    for (auto d:s){
        if (d=='0')count0++;
    }
    if (count0%2==0 || count0==1){
        cout<<"BOB\n";
    }
    else{
        cout<<"ALICE\n";
    }
}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}