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
    ll n, sum1=0, sum2=0;
    cin>>n;
    vector <ll> v1, v2;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v1.push_back(a);
        sum1+=a;
    }
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v2.push_back(a);
        sum2+=a;
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    cout<<min(v1[0]*n + sum2 , v2[0]*n + sum1 )<<"\n";
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