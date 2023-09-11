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
    ll n,min_el=INT_MAX;
    cin>>n;
    vector <ll> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
        min_el = min(min_el, v[i]);
    }
    ll count1=n/2;
    for (int i=0;i<n;i++){
        if (v[i]!=min_el){
            cout<<v[i]<<" "<<min_el<<endl;
            count1--;
        }
        if (count1==0)break;
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