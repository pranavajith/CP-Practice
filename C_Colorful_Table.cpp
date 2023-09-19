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
    ll n,k, maxel, minel, minkaind, maxkaind;
    cin>>n>>k;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    vector <ll> left (k+1,-1), right(k+1);
    for (int i=0;i<n;i++){
        if (left[v[i]]==-1)left[v[i]]=i;
        right[v[i]]=i;
    }
    ll l = 0, r = n-1;
    for (int i=1;i<=k;i++){
        if (left[i]==-1)cout<<0<<" ";
        else{
            while (v[l]<i)l++;
            while (v[r]<i)r--;
            cout<<(r-l+1)*2<<" ";
        }
    }
    cout<<"\n";
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