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
    double n, x0, y0;
    cin>>n>>x0>>y0;
    vector <pair <double, double> > v;
    for (int i=0;i<n;i++){
        double a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    ll count1=0;
    map <double,ll> m;
    // vector <ll> check(1e7,0);
    
    for (int i=0;i<n;i++){
        double slope;
        if ((v[i].first - x0) !=0)slope = (v[i].second-y0)/(v[i].first - x0);
        else slope = 1e7-1;
        if (m[slope]==0){
            count1++;
            m[slope]++;
        }
    }
    cout<<count1<<"\n";
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