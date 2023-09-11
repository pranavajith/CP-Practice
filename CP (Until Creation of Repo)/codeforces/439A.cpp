#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll n,d;
    cin>>n>>d;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll m;
        cin>>m;
        v.push_back(m);
    }
    ll s = 0;
    for (auto w: v){
        s+=w;
    }
    // cout<<endl<<s+10*v.size()<<endl<<endl;
    if ((s + 10*(v.size()-1))>d){
        cout<<-1<<endl;}
    else{
        cout<<(d-s)/5<<endl;
    }
}

int main() 
{

        solve();
    
    return 0;
}