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
    vector <ll> v1;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v1.push_back(a);
    }
    ll m;
    cin>>m;
    vector <ll> v2;
    for (int i=0;i<m;i++){
        ll a;
        cin>>a;
        v2.push_back(a);
    }
    ll pref1=0, max1 = 0;
    for (int i=0;i<n;i++){
        pref1+=v1[i];
        max1 = max(max1, pref1);
    }
    ll pref2=0, max2 = 0;
    for (int i=0;i<m;i++){
        pref2+=v2[i];
        max2 = max(max2, pref2);
    }
    cout<<max1+max2<<"\n";
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