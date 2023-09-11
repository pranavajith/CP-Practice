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

ll isPrime(ll n){
    if (n<=1)return 0;
    for (int i=2;i*i<=n;i++){
        if (n%i==0){
            return i;
        }
    }
    return 0;
}

void solve(){
    ll a,b;
    cin>>a>>b;
    // ll iter = a;
    // while (iter!=b+1){
    //     ll w = iter;
    //     for (int i=2;i<=iter/2;i++){
    //         if (iter%i==0){
    //             cout<<i<<" "<<iter-i<<"\n";
    //             return;
    //         }
    //     }
    //     iter++;
    // }
    if (a==b){
        ll w = isPrime(a);
        // cout<<w<<" w, ";
        if (w){
            cout<<w<<" "<<a-w<<"\n";
            return;
        }
        else{
            cout<<-1<<"\n";
            return;
        }
    }
    else{
        if (b==3 || (a==1 && b==2)){
            cout<<-1<<"\n";
            return;
        }
        if (a%2==1){
            a++;
        }
        if (a==2)a+=2;
        cout<<2<<" "<<a-2<<"\n";
        return;
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}