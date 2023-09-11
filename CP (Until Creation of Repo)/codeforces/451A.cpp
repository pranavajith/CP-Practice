#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n;
    cin>>m;
    if (min(n,m)%2==0)cout<<"Malvika"<<endl;
    else cout<<"Akshat"<<endl;
}

int main() 
{

        solve();
    
    return 0;
}