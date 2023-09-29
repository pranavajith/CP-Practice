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
    ll sol = 0;
    vector <ll> v;
    map <ll,ll> m;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a%k==0)continue;
        a = k-(a+k)%k;
        m[a]++;
        a = a+(m[a]-1)*k;
        
        sol = max(sol, a);
    }
    // cout<<sol+1<<"\n";
    if (sol==0)cout<<sol<<"\n";
    else cout<<sol+1<<"\n";
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