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
    ll n,m,k;
    cin>>n>>m>>k;
    vector <ll> a(n);
    vector <ll> b(m);
    for (int i=0;i<n;i++)cin>>a[i];
    for (int i=0;i<m;i++)cin>>b[i];
    ll amax = *max_element(a.begin(), a.end()), bmax = *max_element(b.begin(), b.end());
    ll amin = *min_element(a.begin(), a.end()), bmin = *min_element(b.begin(), b.end());
    ll suma = accumulate(a.begin(),a.end(),0LL), sumb = accumulate(b.begin(),b.end(),0LL);
    if (amin > bmax){
        if (k%2)cout<<suma<<"\n";
        else cout<<suma-amax+bmin<<"\n";
    }
    //checked
    else if (bmin > amax){
        if (k%2)cout<<suma - amin + bmax<<"\n";
        else cout<<suma<<"\n";
    }
    //checked

    else{
        if (k==1)cout<<max(suma-amin+bmax, suma)<<"\n";
        else if (k%2==0)cout<<min(suma, suma-amin+bmin)<<"\n";
        else cout<<max(suma-amin+bmax, suma) <<"\n";
    }
    // else if (bmax - amin >= amax - bmin){
    //     if (k==1)cout<<suma-amin+bmax<<"\n";
    //     else if (k%2)cout<< suma - amin + bmax <<"\n";
    //     else cout<<min(suma, suma-amin+bmin)<<"\n";
    // }
    // else{
    //     if (k%2)cout<<suma - amin + bmax<<"\n";
    //     else cout<<min(suma- amin + bmax - amax + bmin, suma - amax + bmax)<<"\n";
    // }
    
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