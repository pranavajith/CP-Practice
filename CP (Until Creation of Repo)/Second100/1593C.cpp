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
    vector <ll> v(k+1);
    for (int i=1;i<=k;i++){
        cin>>v[i];
    }
    sort(v.begin()+1, v.end(),greater<ll>());
    ll cat=0, sol=0;
    for (int i=1;i<=k;i++){
        if (n-v[i]<n-cat){
            sol++;
            cat+=n-v[i];
        }
        else{
            break;
        }
    }
    cout<<sol<<endl;
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