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
    vector <ll> miner;
    vector <ll> mines;
    for (int i=0;i<2*n;i++){
        ll x,y;
        cin>>x>>y;
        if (x==0)miner.push_back(abs(y));
        else mines.push_back(abs(x));
    }
    sort(miner.begin(),miner.end());
    sort(mines.begin(),mines.end());
    double sol = 0;
    cout<<setprecision(16);
    for (int i=0;i<n;i++){
        double d = 1;
        double ans1 = sqrt(miner[i]*miner[i]*d + mines[i]*mines[i]*d);
        sol+=ans1;
    }
    cout<<sol<<"\n";
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}