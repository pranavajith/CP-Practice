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
    ll n,a,b,k, ans=0;
    cin>>n>>a>>b>>k;
    vector <ll> v;
    while (n--){
        ll w;
        cin>>w;
        if (w%(a+b)==0)v.push_back(b);
        else{
            if (w%(a+b) > a)v.push_back(w%(a+b) - a);
            else ans++;
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i<v.size(); i++){
        if (k < (v[i]-1)/a + 1)break;
        k-=(v[i]-1)/a + 1;
        ans++;
    }
    cout<<ans<<"\n";
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