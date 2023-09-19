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
    ll n,k;
    cin>>n>>k;
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    ll cursize = 1;
    vector <ll> poss;
    poss.push_back(1);
    for (int i=1;i<n;i++){
        if (v[i]-v[i-1]>k){
            poss.push_back(cursize);
            cursize=1;
        }
        else{
            cursize++;
            if (i==n-1)poss.push_back(cursize);
        }
    }
    if (n==1)cout<<0<<"\n";
    else cout<<n-*max_element(poss.begin(),poss.end())<<"\n";
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