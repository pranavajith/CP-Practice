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
    ll n, m, cursum = 0;
    cin>>n>>m;
    vector <ll> v;
    bool check = true, check2 = false;
    for (int i=0; i<n; i++){
        ll a;
        cin>>a;
        cursum+=a;
        if (a!=m)check = false;
        if (a==m)check2 = true;
    }
    if (check)cout<<0<<"\n";
    else if (check2)cout<<1<<"\n";
    else if (cursum == m*n)cout<<1<<"\n";
    else cout<<2<<"\n";
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