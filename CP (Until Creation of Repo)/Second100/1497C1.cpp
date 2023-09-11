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
    ll n,k;
    cin>>n>>k;
    if (n%2==1){
        cout<<n/2<<" "<<n/2<<" "<<1<<"\n";
    }
    else{
        if (n/2 % 2 == 0){
            cout<<n/2<<" "<<n/4<<" "<<n/4<<"\n";
        }
        else{
            cout<<n/2-1<<" "<<n/2-1<<" "<<2<<"\n";
        }
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