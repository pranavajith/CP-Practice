#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,k;
    cin>>n>>k;
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    double sol = 0;
    if (v[0]!=0)sol = v[0];
    if (sol<(k-v[v.size()-1]))sol = k-v[v.size()-1];
    for (int i=0;i<v.size()-1;i++){
        double sol1 = (double(v[i+1])-double(v[i]))/2;
        if (sol1>sol)sol = double(sol1);
    }
    cout<<fixed<<double(sol)<<"\n";

}

int main() 
{
    // lTxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}