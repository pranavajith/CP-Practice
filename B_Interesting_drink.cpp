#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,a;
    cin>>n;
    vector <ll> v;
    for (int i=0; i<n; i++){
        cin>>a;
        // if (i==0) v.push_back(a);
        // else v.push_back(v.back() + a);
        v.push_back(a);
    }
    ll q; cin>>q;
    sort(v.begin(),v.end());
    // for (auto d:v) cout<<d<<" "; cout<<"\n";
    while (q--){
        cin>>a;
        cout<<upper_bound(v.begin(),v.end(), a) - v.begin()<<"\n";
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