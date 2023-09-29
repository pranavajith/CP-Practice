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
    // vector <ll> v;
    // vector <ll> v1, v2;
    // for (int i=0;i<n;i++){
    //     ll a;
    //     cin>>a;
    //     v1.push_back(a);
    //     if (v.size()==0 || v.back()==a)v.push_back(a);
    //     else v.pop_back();
    // }
    // for (int i=0;i<n;i++){
    //     // ll a;
    //     // cin>>a;
    //     // v1.push_back(a);
    //     ll a = v1.back();
    //     if (v2.size()==0 || v2.back()==a)v2.push_back(a);
    //     else v2.pop_back();
    //     v1.pop_back();
    // }

    // cout<<min(v.size(), v2.size())<<"\n";
    map <ll,ll> m;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        m[a]++;
    }
    ll max1 = 0;
    for (auto d:m)max1 = max(max1, d.second);
    if (max1<=(n+1)/2)cout<<n%2<<"\n";
    else cout<<2*max1-n<<"\n";
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