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
    ll n;
    cin>>n;
    vector <ll> a,b,c;
    for (int i=0;i<n;i++){
        ll y;
        cin>>y;
        a.push_back(y);
    }
    for (int i=0;i<n;i++){
        ll y;
        cin>>y;
        b.push_back(y);
    }
    for (int i=0;i<n;i++){
        if (!b[i])c.push_back(a[i]);
    }
    sort(c.rbegin(),c.rend());
    int j = 0;
    for (int i=0;i<n;i++){
        if (b[i])cout<<a[i]<<" ";
        else cout<<c[j++]<<" ";
    }
    cout<<"\n";
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