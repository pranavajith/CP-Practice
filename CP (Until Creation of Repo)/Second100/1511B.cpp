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
    ll c1 = pow(10,c-1);
    // cout<<c1;
    ll b2 = pow(10,b-1)/c1;
    ll a2 = pow(10,a-1)/c1;
    cout<<(a2)*c1<<" "<<(b2+1)*c1<<"\n";
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