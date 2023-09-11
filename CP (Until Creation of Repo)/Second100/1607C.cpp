#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    ll extra=0;
    for (int i=0;i<n;i++)cin>>v[i];
    if (n==1){
        cout<<v[0]<<endl;
    }
    else{
        sort(v.begin(),v.end());
        // for (auto d:v)cout<<d<<" ";
        // cout<<endl;
        if (count(v.begin(),v.end(),v[0])==n){
            // cout<<"hi!"<<endl;
            if (v[0]>=0)cout<<v[0]<<endl;
            else cout<<0<<endl;
        }
        else{
            ll ans=v[0], sum=v[0];
            for (int i=1;i<n;i++){
                ans = max(ans, v[i]-sum);
                sum+=v[i]-sum;
            }
            cout<<ans<<endl;
        }
    
}}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}