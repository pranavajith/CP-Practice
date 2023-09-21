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
    ll n,w,h;
    cin>>n>>w>>h;
    vector <ll> cakes;
    vector <ll> dispenser;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        cakes.push_back(a-w);
        cakes.push_back(a+w);
    }
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        dispenser.push_back(a-h);
        dispenser.push_back(a+h);
    }
    for (int i=0;i<2*n;i++){
        if (i%2==0){
            if (dispenser[i]<cakes[i]){
                cout<<"NO\n";
                return;
            }
        }
        else{
            if (dispenser[i]>cakes[i]){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
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