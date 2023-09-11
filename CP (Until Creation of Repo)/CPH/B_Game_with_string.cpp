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
    vector <ll> v;
    ll sol = 0;
    for (auto d:s){
        if (v.size()==0)v.push_back(d);
        else{
            if (v[v.size()-1]==d){
                sol++;
                v.pop_back();
            }
            else v.push_back(d);
        }
    }
    if (sol%2)cout<<"Yes\n";
    else cout<<"No\n";
}

int main() 
{
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}