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
     ll n,k;
    cin>>n>>k;
 
    vector<ll> v(n);
 
    for(int i=0; i<n; ++i) cin>>v[i];
 
    sort(v.begin(),v.end());
 
    ll sum = 0;
 
    for(int i=0; i<n; ++i) {
       
       ll rem = v[i] - sum;
 
       if(rem != 0) {
         sum += rem;
         cout<<rem<<endl;
         --k;
       }
 
       if(k == 0) break;
    }
    
    while(k--) {
       cout<<"0"<<endl;
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