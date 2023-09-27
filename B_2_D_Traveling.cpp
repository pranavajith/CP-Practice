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
    ll n,k,a,b, mink1=LLONG_MAX, mink2=LLONG_MAX;
    cin>>n>>k>>a>>b;
    vector < vector <ll> > v;
    for (int i=0;i<n;i++){
        vector <ll> temp;
        ll w,x;
        cin>>w>>x;
        temp.push_back(w);
        temp.push_back(x);
        v.push_back(temp);
    }
    for (int i=0;i<k;i++){
        mink1 = min(mink1, abs(v[i][0]-v[b-1][0]) + abs(v[i][1]-v[b-1][1]));
        mink2 = min(mink2, abs(v[i][0]-v[a-1][0]) + abs(v[i][1]-v[a-1][1]));
    }
    if (mink1==LLONG_MAX || mink2==LLONG_MAX)cout<<abs(v[a-1][0]-v[b-1][0]) + abs(v[a-1][1]-v[b-1][1])<<"\n";
    else cout<<min(mink1+mink2, abs(v[a-1][0]-v[b-1][0]) + abs(v[a-1][1]-v[b-1][1]))<<"\n";
    // cout<<mink1<<" "<<mink2;
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