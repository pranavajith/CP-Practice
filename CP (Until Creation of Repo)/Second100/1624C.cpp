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
    ll n;
    cin>>n;
    vector <bool> v(n+1,false);
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        while (a>n){
            a/=2;
        }
       while(v[a]==true){
        a/=2;
        if (a==0)break;
       }
       v[a]=true;
    }
    for (int i=1;i<n+1;i++){
        if (v[i]==false){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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