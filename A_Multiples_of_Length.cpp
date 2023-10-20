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
    for (ll i = 0; i<n; i++)cin>>v[i];
    if (n!=1)
    {cout<<1<<" "<<1<<"\n";
    cout<<-1*v[0]<<"\n";
    cout<<1<<" "<<n<<"\n";
    cout<<0<<" ";
    for (int i=1; i<n; i++)cout<<-1*n*v[i]<<" ";
    cout<<"\n";
    cout<<2<<" "<<n<<"\n";
    for (int i=1; i<n; i++)cout<<(n-1)*v[i]<<" ";}
    else{
        cout<<1<<" "<<1<<"\n"<<0<<"\n"<<1<<" "<<1<<"\n"<<0<<"\n"<<1<<" "<<1<<"\n"<<-1*v[0]<<"\n";
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