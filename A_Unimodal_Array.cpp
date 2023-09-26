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
    vector <ll> v;
    set <ll> s;
    bool check = false;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
        s.insert(a);
        
        
    }
    v.push_back(INT_MIN);
    int i=0;
    if (n==1 || s.size()==1)cout<<"YES\n";
    else{
    while (i!=n && v[i+1]>v[i])i++;
    while (i!=n && v[i+1]==v[i])i++;
    while (i!=n && v[i+1]<v[i])i++;
    if (i>=n)cout<<"YES\n";
    else cout<<"NO\n";
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