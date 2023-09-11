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
    ll n;
    cin>>n;
    set <ll> s;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        s.insert(a);
    }
    if (s.size()!=n)cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n"; 
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