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
    ll n, minW = INT_MAX, min1 = INT_MAX;
    cin>>n;
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    vector <bool> v1(n, false);
    for (int i=0;i<n;i++){
        if (i==0){
            min1 = v[0];
        }
        else{
            if (v[i] < minW && v[i] > min1){
                v1[i]=true;
                minW=min(minW, v[i]);
            }
            min1 = min(min1, v[i]);
        }
    }
    cout<<count(v1.begin(), v1.end(), true)<<"\n";
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