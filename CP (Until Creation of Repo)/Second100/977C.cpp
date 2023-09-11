#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,k;
    cin>>n>>k;
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    // vector< pair <ll,ll> > v2;
    // cout<<k<<" "<<n<<"\n";
    if (k==0){
        if (v[0]-1>=1)cout<<v[0]-1<<"\n";
        else cout<<-1<<"\n";
    }
    else if (k==n && count(v.begin(),v.end(),v[0])==n){
        cout<<v[0]<<"\n";
    }
    else{
    map <ll,ll> m;
    for (int i=0;i<n-1;i++){
        if (v[i]!=v[i+1]){
            m[i+1]=v[i];
        }
    }
    if (v[n-1]!=v[n-2])m[n]=v[n-1];
    if (m[k]==0){
        cout<<-1<<"\n";
    }
    else cout<<m[k]<<"\n";
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