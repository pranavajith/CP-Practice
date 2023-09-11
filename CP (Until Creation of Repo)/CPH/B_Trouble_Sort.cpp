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
    ll n, first;
    cin>>n;
    cin>>first;
    bool flag = true;
    for (int i=0;i<n-1;i++){
        ll a;
        cin>>a;
        if (a<first)flag = false;
    }
    set <int> s;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        s.insert(a);
    }
    if (flag || s.size()==2){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
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