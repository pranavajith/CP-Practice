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
    ll n,m;
    cin>>n>>m;
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    sort(v.rbegin(),v.rend());
    // reverse(v.begin(),v.end());
    // for (auto d:v)cout<<d<<" ";
    ll a=0, b=0, count1=0;
    while (a<n && b<n){
        while (b<n && v[b]*(b-a+1) < m)b++;
        if (b==n)break;
        count1++;
        a=b+1;
        b=a;
    }
    cout<<count1<<"\n";
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