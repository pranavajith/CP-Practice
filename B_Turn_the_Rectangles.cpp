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
    
    ll x,y;
    cin>>x>>y;
    ll mx = max(x,y);
    n--;
    
    bool flag = false;
 
    while(n--) {
       cin>>x>>y;
       if(flag) continue;
       if(x<=mx && y<=mx) {
         mx = max(x,y);
       }
       else if(x>mx && y<=mx) {
         mx = y;
       }
       else if(x<=mx && y>mx) {
         mx = x;
       }
       else {
         flag = true;
       }
    }
 
    if(flag) {
      cout<<"NO"<<endl;
    } 
    else {
      cout<<"YES"<<endl;
    }
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