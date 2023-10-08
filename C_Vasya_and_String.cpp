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
    ll cursiz = 0, sol = 0;
    for (int i=0; i<n; i+=2){
        if (k1<=0){
            k1=k;
            sol = max(sol, cursiz);
            cursiz = 0;
        }   
        cursiz += v[i];
        if (i!=n-1)cursiz+=v[i+1];

    }
    // for (int i=1; i<n; i+=2){
    //     if (k2<=0){

    //     }
    // }
    cout<<sol;
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