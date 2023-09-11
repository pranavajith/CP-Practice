#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    ll n,a,b,c;
    ll count1=0;
    cin>>n>>a>>b>>c;
    vector <ll> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());

    ll i = 0;
    if (n%v[0]==0){
        cout<<n/v[0]<<endl;
    }
    else{
    while (i<n){
        if ((n-i-1)<=v[1]){
            count1++;
            break;
        }
        else{
            count1++;
            // break;
        }
        i+=v[0];
    }
    cout<<count1<<endl;
}
}

int main() 
{

        solve();
    
    return 0;
}