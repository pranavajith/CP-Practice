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
    vector <ll> v;
    map <ll,ll> m;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
        m[a]++;
    }
    ll limit = v[k-1], sol = 0;
    for (int i=0;i<n;i++){
        if ((i<=k-1 || v[i]==limit) && v[i]>0)sol++;
        else break;
    }
    cout<<sol<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}