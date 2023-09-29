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

// ll sol = LLONG_MAX;

vector <ll> dp(1e7,0);



void solve(){
    ll n;
    cin>>n;
    vector < vector <ll> > v(2);
    for (int i=0;i<2;i++){
        vector <ll> temp(n);
        for (int j=0;j<n;j++)cin>>temp[j];
        v[i]=temp;
    }
    vector <ll> v1(2);
    v1[0]=0;
    v1[1]=0;
    for (int i=0;i<n;i++){
        vector <ll> v2(2);
        v2[0]=max(v1[0], v1[1]+v[0][i]);
        v2[1]=max(v1[1], v1[0]+v[1][i]);
        v1=v2;
    }
    cout<<max(v1[0],v1[1])<<"\n";

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