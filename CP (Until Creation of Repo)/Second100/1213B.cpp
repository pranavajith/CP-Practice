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
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=v[n-1], count1=0;
    for (int i=n-2;i>=0;i--){
        if (v[i]>ans)count1++;
        ans=min(ans, v[i]);
    }
    cout<<count1<<endl;

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