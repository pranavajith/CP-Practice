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

void solve(){
    ll n;
    cin>>n;
    // if (n%2==0)cout<<n/2<<" "<<n/2<<"\n";
    // else{
    //     for (int i=n/2+1;i<n;i++){
    //         if (i%(n-i)==0){
    //             cout<<i<<" "<<n-i<<"\n";
    //             break;
    //         }
            
    //     }
    // }
        ll i1=-1;
        for (int i=2;i<=sqrt(n);i++){
            if (n%i==0){
                i1=i;
                break;
            }
        }
        if (i1==-1)i1=n;
        cout<<n/i1<<" "<<n-n/i1<<"\n";
    // }
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