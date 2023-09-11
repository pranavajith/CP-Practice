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
    ll n,x,t;
    cin>>n>>x>>t;
    if (n*x>t){
    cout<<(t/x)*(n-t/x)+(t/x)*((t/x)-1)/2<<endl;
    }
    else{
        cout<<(n-1)*n/2<<endl;
    }
    // cout<<t/x<<" "<<(n-t/x)<<endl;
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