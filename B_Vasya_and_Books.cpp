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
      ll a[n+5],b[n+5],pos[n+5];
      for(ll i=1;i<=n;i++){
        cin>>a[i];
        pos[a[i]]=i;
      }
      for(ll i=1;i<=n;i++){
        cin>>b[i];
      }
      for(ll i=1;i<=n;i++){
        ll x=pos[b[i]],ans=0;
        for(ll j=x;j>=1;j--){
          if(pos[a[j]]!=0){
            ans++;
            pos[a[j]]=0;
          }
          else {
            break;
          }
        }
        cout<<ans<<" \n"[i==n];
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