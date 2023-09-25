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

ll fact(ll n){
    ll a=1;
    while (n>0){
        a*=n--;
    }
    return a;
}

void solve(){
    string s;
    cin>>s;
    ll n = s.size(), count1=0;
    for (int i=0;i<n-1;i++){
        if (s[i]==s[i+1])count1++;
    }
    vector <ll> v;
    ll prod = 1;
    bool check = false;
    ll counter = 1;
    for (int i=0;i<n-1;i++){
        if (s[i+1]==s[i]){
            // check = true;
            counter++;
            if (i==n-2)prod*=fact(counter);
        }
        else{
            prod*=fact(counter);
            counter=1;
        }
    }
    cout<<count1<<" "<<prod%998244353<<"\n";
    // cout<<fact(4);
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