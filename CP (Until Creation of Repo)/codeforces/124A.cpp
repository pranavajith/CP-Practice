#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
using namespace std;
#define ll long long

void solve(){
    ll n, a, b;
    cin>>n>>a>>b;
    cout<<n-max(a+1,n-b)+1;
}

int main() 
{

        solve();
    
    return 0;
}