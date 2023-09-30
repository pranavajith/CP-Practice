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
    ll n,m;
    cin>>n>>m;
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    if (n==1){
        cout<<v[0]+m;
        return;
    }
    ll k=1, i = n/2;
    while (m-k>=0){
        while (i<n && v[i]==v[n/2])i++;
        k=i-n/2;

        if (i!=n){
            if ((v[i]-v[n/2])*k<=m){
                m-=(v[i]-v[n/2])*k;
                v[n/2]=v[i];
                // m-=
            }
            else if (m>=k){
                v[n/2]+=m/k;
                break;
            }
            else break;
        }
        else{
            v[n/2]+=m/k;
                break;
        }
    }
    cout<<v[n/2];
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