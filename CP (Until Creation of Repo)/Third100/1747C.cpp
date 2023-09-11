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
    ll n, first;
    cin>>n>>first;
    n--;
    ll min1 = first;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        min1=min(min1,a);
    }
    if (min1==first)cout<<"BOB\n";  
    else cout<<"ALICE\n";

}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}