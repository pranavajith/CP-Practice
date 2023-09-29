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
    ll n, tot = 0, siz=0, cursiz = 0, aprev = 0;
    cin>>n;
    vector <ll> v;
    // cin>>first>>second;
    for (int i=0;i<n;i++){
        ll a, b;
        cin>>a>>b;
        if (i==0){
            tot = a+b;
            siz = b;
            cursiz = b;
            aprev = a;
        }
        else{
            tot = max(tot, a)+b;
            cursiz = max(0LL,cursiz - (a-aprev)) + b;
            siz = max(cursiz, siz);
            aprev = a;
        }
    }
    cout<<tot<<" "<<siz;
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