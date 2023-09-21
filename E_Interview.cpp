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
  ll a; cin>>a;
  vector<ll> v(a),vv(a+1,0);
  for(int i=0;i<a;i++){
    cin>>v[i];
  }
  for(int i=0;i<a;i++){
    vv[i+1]=vv[i]+v[i];
  }
  // for(auto i:vv) cout<<i<<" ";
  ll s=1,e=a;
  while(s<e){
    ll mid=s+(e-s)/2;
    ll sum=vv[mid]-vv[s-1];
    cout<<"?"<<" "<<mid-s+1<<" ";
    for(int i=s;i<=mid;i++){
      cout<<i<<" ";
    }
    cout<<endl;
    cout.flush();
    ll c; cin>>c;
    if(c==sum) s=mid+1;
    else e=mid;
  }
  cout<<"!"<<" "<<s<<endl;  
  return;
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