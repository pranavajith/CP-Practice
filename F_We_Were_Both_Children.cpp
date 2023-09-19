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
    map <ll,ll> m;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a<=n)m[a]++;
    }
    vector <ll> v(n+1,0);
    for (auto i:m){
        ll a = i.first;
        while (a<=n){
            v[a]+=i.second;
            a+=i.first;
        }
    }
    cout<<*max_element(v.begin(),v.end())<<"\n";
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