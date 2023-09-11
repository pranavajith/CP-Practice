#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n;
    vector <ll> vn;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        vn.push_back(a);
    }
    cin>>m;
    vector <ll> vm;
    for (int i=0;i<m;i++){
        ll a;
        cin>>a;
        vm.push_back(a);
    }
    sort(vn.begin(),vn.end());
    sort(vm.begin(),vm.end());

    vector <ll> v;

    for (int i=m-1;i>=0;i--){
        for (int j=0;j<n;j++){
            if (vm[i]%vn[j]==0){v.push_back(vm[i]/vn[j]);
            // cout<<i<<" "<<j<<" "<<vm[i]/vn[j]<<endl;
            }
        }
    }

    sort(v.begin(),v.end());
    cout<<count(v.begin(),v.end(),v[v.size()-1])<<endl;
    

}

int main() 
{

        solve();
    
    return 0;
}