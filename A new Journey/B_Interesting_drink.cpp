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
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    // for (auto d:v)cout<<d<<" ";
    ll m;
    cin>>m;
    
    while (m--){
        ll a;
        cin>>a;
        if (a >= v[n-1])cout<<n<<"\n";
        else if (a<v[0])cout<<0<<"\n";
        else{
            ll lol = upper_bound(v.begin(),v.end(),a)-v.begin();
            cout<<lol<<"\n";
        }
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