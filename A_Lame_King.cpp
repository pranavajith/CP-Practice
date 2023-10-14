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
    ll a,b;
    cin>>a>>b;
    ll a1 = max(abs(a), abs(b));
    ll b1 = min(abs(a), abs(b));
    if (a1==b1){
        cout<<2*a1<<"\n";
        return;
    }
    ll t = 2*b1;
    a1-=b1;
    t+=2*a1-1;
    cout<<t<<"\n";
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