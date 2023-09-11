#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,countneg=0;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a<0)countneg++;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll ind = find(v.begin(),v.end(),0)-v.begin();
    if (countneg%2==0){
        cout<<1<<" "<<v[0]<<"\n";
        cout<<n-3<<" ";
        for (int i=2;i<n;i++){
            if (i!=ind){
                cout<<v[i]<<" ";
            }
        }
        cout<<"\n";
        cout<<2<<" "<<v[1]<<" "<<0<<"\n";
    }
    else{
        cout<<1<<" "<<v[0]<<"\n";
        cout<<n-2<<" ";
        for (int i=1;i<n;i++){
            if (i!=ind){
                cout<<v[i]<<" ";
            }
        }
        cout<<"\n";
        cout<<1<<" "<<0<<"\n";
    }
}

int main() 
{
    // lTxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}