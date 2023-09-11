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
    string s;
    cin>>s;
    vector <ll> v1;
    vector <ll> v2;
    ll i1 = INT_MAX, i2=INT_MAX;
    for (auto d:s){
        if (i1==INT_MAX){
            v1.push_back(0);
            i1=1;
        }
        if (i2==INT_MAX){
            v2.push_back(0);
            i2=-1;
        }
        if (d=='+'){
            v1.push_back(i1++);
            v2.push_back(i2++);
        }
        if (d=='-'){
            
        }
    }
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