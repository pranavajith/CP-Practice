#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++){
        ll a; 
        cin>>a;
        v[i] = a+i+1;
    }
    sort(v.begin(),v.end());
    ll m = 1e18;
    for (int i=n-1; i>=0; i--){
        m = min(m-1, v[i]);
        cout<<m<<" ";
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