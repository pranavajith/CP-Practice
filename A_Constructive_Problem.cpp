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

void solve() {
    // Add your solution here
 
    ll n;
    cin>>n;
 
    vector<ll> a(n);
 
    for(auto &i: a) cin>>i;
 
    if(n%2){
        cout<<"YES"<<endl;
        return;
    }
 
    ll cap=0;
    for(ll i=0;i<n;i+=2){
        cap+=a[i+1]-a[i];
    }
 
    if(cap >=0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
    
 
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