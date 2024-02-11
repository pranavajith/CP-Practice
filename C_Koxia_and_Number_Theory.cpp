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
     map <ll,ll> m;
     vector <ll> v(n);
     for (int i=0; i<n; i++) {
          cin>>v[i]; m[v[i]]++;
     }
     if (m.size() != n) {
          cout<<"NO\n";
          return;
     }
     for (int i=2; i<=100; i++){
          m.clear();
          for (int j=0; j<n; j++) m[v[j]%i]++;
          if (m.size() == i){
               bool check = true;
               for (auto d:m){
                    if (d.second==1){
                         check = false;
                         break;
                    }
               }
               if (check){
                    cout<<"NO\n";
                    return;
               }
          }
     }
     cout<<"YES\n";
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