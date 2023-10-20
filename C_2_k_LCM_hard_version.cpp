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

void answer(ll n){
    if (n%2){
        cout<<1<<" "<<n/2<<" "<<n/2<<"\n";
    }
    else if (n%4){
        cout<<n/2-1<<" "<<n/2-1<<" "<<2<<"\n";
    }
    else{
        cout<<n/2<<" "<<n/4<<" "<<n/4<<"\n";
    }
}

void solve(){
    ll n, k;
    cin>>n>>k;
    for (ll i = 0; i<k-3; i++){
        cout<<1<<" ";
    }
    answer(n-k+3);
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}