#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll x,y,a,b,count1=0;
    cin>>x>>y>>a>>b;
    if (a*2>=b){
        cout<<min(x,y)*b + a*(max(x,y)-min(x,y))<<"\n";
    }
    else{
        cout<<(x+y)*a<<"\n";
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