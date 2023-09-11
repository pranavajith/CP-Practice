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
    map<ll,ll> m;
    ll n, count1=0;
    cin>>n;
    vector<ll> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]=i+1;
    }
    sort(v.begin(),v.end());
    ll total=0;
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if ((v[i]*v[j])>(2*n-1))break;
            else{
                if (m[v[i]]+m[v[j]]==v[i]*v[j])total++;
            }
        }
    }
    cout<<total<<"\n";
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