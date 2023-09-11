#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector <ll> v;
    for (ll i=0;i<n;i++){
        ll m;
        cin>>m;
        v.push_back(m);
    }
    ll ind=0;
    int check = 0;
    if (v[0]%2==0 & v[1]%2==0){

        for (ll i=0;i<n;i++){
            if ((v[i]%2)!=0){
                ind=i;
            }
        }
    }
    else if (v[0]%2!=0 & v[1]%2!=0){
        for (ll i=0;i<n;i++){
            if ((v[i]%2)==0){
                ind=i;
            }
        }
    }
    else if ((v[0]%2!=0 & v[2]%2==0) | (v[0]%2==0 & v[2]%2!=0)){
        ind=0;
    }
    else{
        ind=1;
    }
    cout<<ind+1<<endl;
}

int main() 
{

        solve();
    
    return 0;
}