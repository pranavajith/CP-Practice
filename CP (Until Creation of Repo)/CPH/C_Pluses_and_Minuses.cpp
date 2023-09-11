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
    ll temp = 0;
    for (auto d:s){
        if (d=='+')temp++;
        else temp--;
        v.push_back(temp);
    }
    ll minel = *min_element(v.begin(),v.end());
    if (minel >= 0)cout<<s.size()<<"\n";
    else{
        ll sol=0;
        for (int i=0;i<s.size();i++){
            v[i]*=-1;
        }
        // for (auto d:v)cout<<d<<" ";cout<<"\n";
        ll a = 0;
        for (int i=0;i<(-1*minel);i++){
            while (v[a]<=i)a++;
            sol+=a+1;
            // cout<<a<<" <-a ";
        }
        // cout<<"\n";
        sol+=v.size();
        cout<<sol<<"\n";
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