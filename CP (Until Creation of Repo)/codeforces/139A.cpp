#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<7;i++){
        ll m;
        cin>>m;
        v.push_back(m);
    }
    int c = -1;
    // ll i = 0;
    while (n>0){
        c=(c+1)%7;
        n-=v[c];
    }
    cout<<c+1<<endl;
}

int main() 
{

        solve();
    
    return 0;
}