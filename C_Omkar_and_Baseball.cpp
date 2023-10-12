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
    for (int i=0; i<n; i++)cin>>v[i];
    ll a = 0, b = n-1;
    while (a<n && v[a]==a+1)a++;
    if (a==n){
        cout<<0<<"\n";
        return;
    }
    while (b>=0 && v[b]==b+1)b--;
    for (int i=a;i<=b;i++){
        if (v[i]==i+1){
            cout<<2<<"\n";
        return;
        }
    }
    cout<<1<<"\n";
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