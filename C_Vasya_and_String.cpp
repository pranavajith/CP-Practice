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
    ll n,k, counter = 1; string s;
    cin>>n>>k>>s;
    char c = s[0];
    vector <ll> v;
    for (int i=1; i<n; i++){
        if (s[i]!=c){
            c=s[i];
            v.push_back(counter);
            counter=1;
        }
        else counter++;
    }
    v.push_back(counter);
    // for (auto d:v)cout<<d<<" ";
    ll k1=k, k2=k;
    ll l = 0, r = 0, cursiz = 0;
    while (r<n){
        
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}