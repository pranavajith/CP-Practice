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
    ll n, sol=0;
    cin>>n;
    map <ll,ll> mx;
    map <ll,ll> my;
    vector <pair <ll,ll> > v;
    for (ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
        mx[x]++;
        my[y]++;
    }
    // cout<<"\n\n";
    vector <ll> tempx, tempy; 
    ll count2=0;
    for (int i=0;i<n;i++){
        if (mx[v[i].first]==1 && my[v[i].second]==1){
            sol++;

            mx[v[i].first]++; my[v[i].second]++;
        }
        else {
            if (find(tempx.begin(), tempx.end(), v[i].first)==tempx.end() && find(tempy.begin(), tempy.end(), v[i].second)==tempy.end())count2++;
            tempx.push_back( v[i].first);
            tempy.push_back(v[i].second);
        }
    }
    if (sol==n)cout<<sol-1<<"\n";
    else if (sol>0)cout<<sol-1+count2<<"\n";
    else cout<<0<<"\n";
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