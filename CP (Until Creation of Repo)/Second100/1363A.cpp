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
    ll n, k, countodd = 0;
    cin>>n>>k;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a%2==1)countodd++;
    }
    if (countodd==0 || (countodd%2==0 && k==n) || (countodd==n && k%2==0)){
        cout<<"No\n";
    }
    else cout<<"Yes\n";
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