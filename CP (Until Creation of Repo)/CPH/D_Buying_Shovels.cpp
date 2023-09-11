#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

// vector <ll> v(100000001 ,0);

// void loop(){
//     for (int i=2;i<100000001;i++){
//         for (int j=i*2;j<100000001;j+=i){
//             v[j]=1;
//         }
//     }
// }


void solve(){
    ll n,m;
    cin>>n>>m;
    if (n<=m)cout<<1<<"\n";
    else{
        // if (v[n])cout<<n<<"\n";
        // else{
            ll sol = n;
            ll sqrt1=sqrt(n);
        for (ll i=1;i<=sqrt1;i++){
            if (n%i==0){
                if (i<=m)sol = min(sol,n/i);
                if (n/i <=m)sol = min(sol,i);
            }
        }
        cout<<sol<<"\n";
        // if (sol==-1)cout<<n<<"\n";
        // else cout<<sol<<"\n";
        // }
    }
}

int main() 
{
    // TxtIO;
    // loop();
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}