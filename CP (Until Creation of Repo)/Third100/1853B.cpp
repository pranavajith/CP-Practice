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
    ll n,k, ans=0;
    cin>>n>>k;
    for (int i=1;i<=n;i++){
        bool check=true;
        ll a = n;
        ll b = i;
        for (int j=0;j<k-2;j++){
            ll temp = b;
            b = a-temp;
            a = temp;
            if (b>a)check=false;
            if (a<0 || b<0)check=false;
            if (!check)break;
        }   
        if (check)ans++;
    }
    cout<<ans<<"\n";
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}