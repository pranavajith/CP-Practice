#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    ll mid;
    if (n%2==0){
        mid=n/2;
    }
    else{
        mid = n/2+1;
    }
    if (m<=mid){
        cout<<2*m-1<<endl;
    }
    else{
        cout<<2*(m-mid)<<endl;
    }
}

int main() 
{

        solve();
    
    return 0;
}