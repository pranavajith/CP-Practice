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
    ll n, k;
    cin>>n>>k;
    vector <ll> v(n), v1(k);
    for (int i=0;i<n;i++)cin>>v[i];
    for (int i=0;i<k;i++)cin>>v1[i];
    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    ll id=-1, sol = 0, l = 0, r = n-1;
    for (int i=0;i<k;i++){
        if (v1[i]!=1)break;
        sol+=2*v[r];r--;
        id = i;
    }
    // for (int j=k-1;j>)
    
    for (int i=k-1;i>id;i--){
        sol+=v[l]+v[r--]; 
        l+=v1[i]-1;
    }
    cout<<sol<<"\n";
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