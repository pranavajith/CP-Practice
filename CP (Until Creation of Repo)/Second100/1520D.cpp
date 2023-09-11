#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n1;
    cin>>n1;
    map <ll,ll> m;
    ll count1=0;
    for (int i=0;i<n1;i++){
        ll a;
        cin>>a;
        count1+= m[a-i];
        m[a-i]++;

    }
    
    cout<<count1<<endl; 
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