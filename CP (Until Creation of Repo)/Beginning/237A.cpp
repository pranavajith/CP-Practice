#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll a=-1,b=-1,count1=1;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll c,d;
        cin>>c>>d;
        if (c==a && d==b){
            count1++;
            
        }
        if ((c!=a || d!=b) || (c==a && d==b && i==n-1)){
            v.push_back(count1);
            // cout<<count1<<" ";
            count1=1;
            a=c;
            b=d;
        }
        
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]<<endl;
}

int main() 
{
 
        solve();
    
    return 0;
}