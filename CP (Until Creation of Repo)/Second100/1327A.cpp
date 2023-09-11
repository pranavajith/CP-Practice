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
    ll n,k;
    cin>>n>>k;
    if (n>= pow(k,2) && n%2==k%2)cout<<"YES\n";
    else cout<<"NO\n";
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