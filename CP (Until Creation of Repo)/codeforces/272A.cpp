#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector <ll> v;
    ll sum = 0;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        sum+=a;
    }
    ll count = 0;
    for (int i=1;i<6;i++){
        if (((sum+i)%(n+1))!=1){
            count++;
        }
    }
    cout<<count<<endl;
}

int main() 
{

        solve();
    
    return 0;
}