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
    ll n, maxcounter = 0;
    cin>>n;
    // vector <bool> check(1e7, false);
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    // ll curmax = v[0], curx = 1;
    ll curmax = v[0];
    for (int i=1;i<n;i++){
        // curmax1 = max(curmax1, v[i]);
        // cout<<v[i]<<" "<<v[i-1]<<"\n";
        if (v[i]<curmax){
            // cout<<v[i];
            ll counter = 1, pow2 = 1;
            // cout<<"\nnew "<<v[i-1]<<" : ";
            while ((v[i] + pow2 < curmax)){
                counter++;
                v[i]+=pow2;
                pow2*=2;
                // cout<<v[i]+pow2<<" "<<counter<<" "<<pow2<<"\n";
            }
            v[i]+=pow2;
            // check[counter]=true;
            maxcounter = max(maxcounter, counter);
        }
        else curmax = v[i];
    }
    cout<<maxcounter<<"\n";
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