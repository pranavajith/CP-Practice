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
    vector < ll > v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());

    if (v[v.size()-1]-v[0]){
        ll count1 = count(v.begin(),v.end(),v[0]);
        ll count2 = count(v.begin(),v.end(),v[v.size()-1]);
        cout<<v[v.size()-1]-v[0]<<" "<<(count1 * count2)<<endl;
    }
    else{
        cout<<0<<" "<<(n*(n-1))/2<<endl;
    }
    

}
int main() 
{

        solve();
    
    return 0;
}