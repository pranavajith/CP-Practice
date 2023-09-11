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
    ll n, sol=0;
    cin>>n;
    vector <ll> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for (int i=0;i<n;i++){
        if (v[i]==i+1){
            sol++;
        }
    }
    cout<<sol/2 + sol%2<<"\n";  
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