#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector <ll> h;
    vector <ll> g;
    for (int i=0;i<n;i++){
        int m;
        cin>>m;
        h.push_back(m);
        cin>>m;
        g.push_back(m);
    }
    ll count_num = 0;
    for (int i=0;i<n;i++){
        if (count(g.begin(),g.end(),h[i])){
            count_num+=count(g.begin(),g.end(),h[i]);
        }
    }
    cout<<count_num<<endl;
}

int main() 
{

        solve();
    
    return 0;
}