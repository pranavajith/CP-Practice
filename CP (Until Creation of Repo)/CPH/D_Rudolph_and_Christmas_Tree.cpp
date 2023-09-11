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

double calc_area(double b, double h){
    return (b * h) / 2;
}

void solve(){
    double n,d,h, o = 1;
    cin>>n>>d>>h;
    vector <double> v;
    for (int i=0;i<n;i++){
        double a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    vector <double> v2;
    for (int i=0;i<n-1;i++){
        if (v[i+1]-v[i]<h)v2.push_back(h-(v[i+1]-v[i]));
    }
    double sol = (n*d*h*o)/2;
    for (auto e:v2){
        sol-=((e*d*e*o)/(2*h));
    }
    cout<<setprecision(15);
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