#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector <ll> v1;
    vector <ll> v2;
    for (int i=0;i<n;i++){
        int m;
        cin>>m;
        v1.push_back(m);
        v2.push_back(m);
    }

    for (int i=0;i<n;i++){
        v1[v2[i]-1]=i+1;
    }

    for (int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}

int main() 
{

        solve();
    
    return 0;
}