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
    ll n, sumall = 0, sumodd = 0;
    cin>>n;
    vector <ll> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
        sumall+=v[i];
        if (i%2)sumodd+=v[i];
    }
    if (sumodd >= (sumall)/2){
        for (int i=0;i<n;i++){
            if (i%2)cout<<v[i]<<" ";
            else cout<<1<<" ";
        }
        cout<<"\n";
    }
    else{
        for (int i=0;i<n;i++){
            if (i%2==0)cout<<v[i]<<" ";
            else cout<<1<<" ";
        }
        cout<<"\n";
    }
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