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
    ll n,m1;
    cin>>n>>m1;
    map <ll,ll> m;
    for (int i=0;i<n-1;i++){
        ll a,b;
        cin>>a>>b;
        m[a]++; m[b]++;
    }
    // cout<<"here!";
    map <ll,ll> m2;
    for (auto d:m){
        // cout<<d.first<<" "<<d.second<<"\n";
        m2[d.second]++;
    }
    vector < vector <ll> > v;
    for (auto d:m2){
        vector <ll> temp;
        temp.push_back(d.second);
        temp.push_back(d.first);
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    // reverse(v.begin(),v.end());
    // cout<<"\n\n\n\n\n";
    // for (auto d:v)cout<<d[0]<<" "<<d[1]<<"\n";
    // cout<<"\n\n";
    cout<<v[0][1]<<" "<<m2[1]/(n-m2[1]-1)<<"\n";
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