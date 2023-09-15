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
    ll n, sol = 0;
    cin>>n;
    for (int i=1;i<=n;i++){
        ll sol1 = 0;
        ll maxhere = 0;
        for (ll j=1;j<i;j++){
            // cout<<j<<"<-j1 ";
            sol1+=j*j;
            // cout<<j<<" ";
            maxhere = max(maxhere, j*j);
        }
        // cout<<" here! ";
        for (ll j=i;j<=n;j++){
            // cout<<j<<"<-j2 ";
            sol1+=(j)*(n-(j-i));
            // cout<<(n-(j-i))<<" : "<<j<<" : "<<(j)*(n-(j-i))<<" ";
            maxhere = max(maxhere, (j)*(n-(j-i)));
        }
        // cout<<sol1<<" <- sol1 \n";
        sol = max(sol,sol1 - maxhere);
        // cout<<sol<<"\n";
    }
    cout<<sol<<"\n";
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