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
    ll n,k;
    cin>>n>>k;
    // vector <ll> v(n);
    map <ll,ll > ma;
    map <ll,ll > mb;
    vector <ll> v(n+1);
    for (ll i=1;i<=n;i++){
        cin>>v[i];
        if (ma[v[i]]==0)ma[v[i]]=i;
        if (mb[v[i]]==0)mb[v[i]]=i;
        ma[v[i]]=min(i,ma[v[i]]);
        mb[v[i]]=max(i,mb[v[i]]);
    }
    
    while (k--){
        ll a,b;
        cin>>a>>b;
        // cout<<ma[a]<<" "<<mb[b]<<endl;
        if (ma[a] && mb[b] && ma[a]<=mb[b]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        // if (count(v1.begin(),v1.end(),a)>0 && count(v1.begin(),v1.end(),b)>0){
        // if (*min_element(m[a].begin(),m[a].end()) < *max_element(m[b].begin(),m[b].end())){
        //     check = true;
        // }
        // if (check){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
    }
}

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