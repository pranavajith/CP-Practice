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
    for (int i=0; i<n;i++)cin>>v[i];
    sort(v.begin(), v.end());
    vector <ll> sol(n); ll iter = 0;
    for (int i=1; i<n; i+=2){
        sol[i]=v[iter++];
    }
    for (int i=0; i<n; i+=2){
        sol[i]=v[iter++];
    }
    ll ans = 0;
    for (int i=1; i<n-1; i++){
        if (sol[i]<sol[i-1] && sol[i]<sol[i+1])ans++;
    }
    cout<<ans<<"\n";
    for (int i=0; i<n; i++)cout<<sol[i]<<" ";
    cout<<"\n";
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