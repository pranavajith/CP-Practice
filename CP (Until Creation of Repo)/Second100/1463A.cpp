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
    ll a,b,c;
    cin>>a>>b>>c;
    if ((a+b+c)%9!=0)cout<<"NO\n";
    else{
        ll k = (a+b+c)/9;
        if (a>=k && b>=k && c>=k){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
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