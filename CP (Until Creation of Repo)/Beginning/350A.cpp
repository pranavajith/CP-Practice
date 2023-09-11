#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    vector <ll> v1;
    vector <ll> v2;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v1.push_back(a);
    }
    for (int i=0;i<m;i++){
        ll a;
        cin>>a;
        v2.push_back(a);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    
    if (v1[v1.size()-1]>=v2[0]){
        cout<<-1<<endl;
    }
    else{
        ll w=0;
        for (int i=0;i<n;i++){
            if (i*(1.5)>=v1[v1.size()-1]){
                w=i;
                break;
            }
        }
        
    }

}

int main() 
{

        solve();
    
    return 0;
}