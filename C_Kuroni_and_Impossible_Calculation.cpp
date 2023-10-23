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
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,m;
    cin>>n>>m;
    if (n>m)cout<<0<<"\n";
    else{
        vector <ll> v(n);
        for (int i=0; i<n; i++)cin>>v[i];
        ll mult = 1;
        for (int i=0; i<n-1; i++){
            for (int j=i+1; j<n; j++){
                ll temp = abs(v[i]-v[j])%m;
                mult = (mult*temp)%m;
            }
        }
        cout<<mult<<"\n";
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