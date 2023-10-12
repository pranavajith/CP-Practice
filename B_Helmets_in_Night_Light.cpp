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

bool sort2(pair <ll,ll> p1, pair <ll,ll> p2){
    return p1.second < p2.second;
}

void solve(){
    ll n,p;
    cin>>n>>p;
    vector <pair <ll,ll> > v;
    vector <ll> a(n), b(n);
    for (int i=0; i<n; i++)cin>>a[i];
    for (int i=0; i<n; i++)cin>>b[i];
    for (int i=0; i<n; i++){
        if (b[i]<p)v.push_back(make_pair(a[i], b[i]));
    }

    ll n2 = v.size();
    sort(v.begin(), v.end(), sort2);
    // for (auto d:v)cout<<d.first<<" "<<d.second<<"\n";

    ll curamount = p, curppl = 1;
    for (int i=0; i<n2; i++){
        if (curppl + v[i].first > n){
            curamount += (n-curppl)*v[i].second;
            cout<<curamount<<"\n";
            return;
        }
        curppl +=v[i].first;
        curamount+=v[i].first*v[i].second;
    }
    curamount+=(n-curppl)*p;
    cout<<curamount<<"\n";


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