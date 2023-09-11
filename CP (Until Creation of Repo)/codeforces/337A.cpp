#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n;
    cin>>m;
    vector <ll> v;
    for (int i=0;i<m;i++){
        int w;
        cin>>w;
        v.push_back(w);
    }

    // for (int i=0;i<m;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    sort(v.begin(),v.end());

    // for (int i=0;i<m;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    ll gap = v[n-1]-v[0];
    // cout<<endl<<"Gap: "<<gap<<endl;
    for (int i=1;i<v.size()-n+1;i++){
        // cout<<v[i+n-1]-v[i]<<" ";
        if (v[i+n-1]-v[i]<gap){
            gap = v[i+n-1]-v[i];
        }
    }
    cout<<gap<<endl;
}

int main() 
{

        solve();
    
    return 0;
}