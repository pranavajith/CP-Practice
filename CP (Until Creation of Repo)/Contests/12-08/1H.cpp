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

ll sumdigits(ll a){
    ll w=0;
    // ll n = floor(log10(a)+1);
    string s = to_string(a);
    for (auto d:s){
        w+=d-'0';
    }
    return w;
}

void solve(){
    ll a,b;
    cin>>a>>b;
    if (a==b){
        cout<<"Stable\n0\n";
    }
    else{
        ll a1=0, a2=0;
        cout<<"Stable\n";
        if (b<a){
            string s = to_string(b);
            s='1'+s;
            b=stoi(s);
        }
        a-=b;
        if (sumdigits(a)%9==0){
            a1=0;
        }
        else 
    }
}

int main() 
{
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}