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

bool check(int m, vector <ll> v){
    ll temp = v[m];
    for (int i=0;i<v.size();i++){
        if (i==m)continue;
        if (temp < v[i])return false;
        temp+=v[i];
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    vector <ll> copyv(v.begin(), v.end());
    sort(copyv.begin(), copyv.end());
    ll l=0, r=n-1;
    while (l<=r){
        ll mid = (l+r)/2;
        if (check(mid, copyv))r=mid-1;
        else l=mid+1;
    }
    // cout<<l<<"\n";
    vector <ll> sol;
    for (int i=0;i<n;i++){
        if (v[i]>=copyv[l])sol.push_back(i+1);
    }
    cout<<sol.size()<<"\n";
    for (int i=0;i<sol.size();i++)cout<<sol[i]<<" ";cout<<"\n";
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