#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n, a_prev, b_prev;
    cin>>n;
    bool flag1chron=true, flag2chron=true, flag12=true;
    for (int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        if (i!=0 && a_prev>a)flag1chron = false;
        if (i!=0 && b_prev>b)flag2chron = false;
        if (b>b_prev && (b-b_prev) > (a-a_prev))flag2chron = false;
        if (b>a)flag12 = false;
        a_prev = a; b_prev = b;
    }   
    if (flag12 && flag1chron && flag2chron)cout<<"YES\n";
    else cout<<"NO\n";
}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}