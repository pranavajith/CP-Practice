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
    ll n, a1;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    if (v[0]==1){
    ll i; bool flag=true;
    for (i=0;i<n-1;i++){
        if (v[i+1]-v[i]>1){
            flag = false;
            break;
        }
    }
    if (!flag)cout<<v[i]+1<<"\n";
    else cout<<v[n-1]+1<<"\n";
    }
    else cout<<1<<"\n";
}

int main() 
{
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}