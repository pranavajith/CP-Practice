#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    for (int i=0;i<3;i++){
        ll a,b;
        cin>>a>>b;
        if (n==a){
            n=b;
        }
        else if (n==b){
            n=a;
        }
    }
    cout<<n<<endl;
}

int main() 
{
    TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}